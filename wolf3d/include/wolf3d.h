/*
** wolf3d.h for wolf3d in /home/anteron/Tek1/MUL/wolf3d/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu@epitech.eu>
**
** Started on  Mon Dec 19 09:27:45 2016 Quentin Laille
** Last update Mon Jan 23 09:19:45 2017 Quentin Laille
*/

#ifndef _WOLF3D_H_
# define _WOLF3D_H_

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Window/Event.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <math.h>

#define SCREEN_WIDTH	1080
#define SCREEN_HEIGHT	720
#define SMALLER(x, y) (x < y ? x : y)
#define BIGGER(x, y) (x > y ? x : y)
#define ABS(x) (x > 0 ? x : -(x))
#define STEP(x) (x > 0 ? 1 : -1)
#define TILE(x) (x > 0 ? 1 : 0)

typedef struct s_my_framebuffer
{
  sfUint8* pixels;
  int width;
  int height;
} t_my_framebuffer;

typedef struct s_sfmlwindow
{
  t_my_framebuffer *framebuffer;
  sfRenderWindow *window;
  sfTexture *texture;
  sfSprite *sprite;
} t_sfmlwindow;

typedef struct s_map
{
  sfVector2i mapsize;
  int **map;
} t_map;

typedef struct s_player
{
  float direction;
  sfVector2f pos;
  float movespeed;
  float fov;
} t_player;

typedef struct s_keyboard
{
  sfKeyCode k;
  sfVector2f (*move_fnc)(sfVector2f, float, float);
} t_keyboard;

typedef struct s_colorbank
{
  sfColor color;
  char* name;
} t_colorbank;

typedef struct s_raydata
{
  sfVector2f raydir;
  sfVector2f cursor;
  sfVector2f delta;
  sfVector2f step;
  sfVector2i tile;
} t_raydata;

/*
** INIT
*/

t_my_framebuffer* my_framebuffer_create(int, int);
sfRenderWindow* create_window(char*, int, int);
void wolf_exit(t_sfmlwindow, t_map, t_player);
sfUint8* my_pixelbuffer_create(int, int);
t_player init_player();
t_sfmlwindow init();

/*
** DISPLAY
*/

void render_camera(t_sfmlwindow, t_map, t_player);
void display(t_sfmlwindow, t_map, t_player);
void refresh(t_sfmlwindow);
void draw_ray(t_sfmlwindow, int, float);
sfColor new_color(int, int, int);

/*
** OPERATE
*/

sfVector2f move_backward(sfVector2f, float, float);
sfVector2f move_strafe_left(sfVector2f, float, float);
sfVector2f move_strafe_right(sfVector2f, float, float);
float cam_rotate_right(float, float, float);
float cam_rotate_left(float, float, float);
void operate(t_sfmlwindow, t_player *, int**);
void camera_mouse(t_sfmlwindow, t_player*);
void keyboard_operate(t_player*, int**);

/*
** PARSING
*/

t_map parse_this(char*);
t_map new_data();
int line_length(char*);
int col_length(char*);
char *get_file(char*, int);
int get_length(char *fp);
int **get_tab_arr(char*, sfVector2i);
int *get_in_arr(char*, int, int);
int extract_line(char*, int, int);
int count_nb(char*);

/*
** SRC
*/

void my_draw_line(t_my_framebuffer*, sfVector2i, sfVector2i, sfColor);
void my_put_pixel(t_my_framebuffer*, int, int, sfColor);
float raycast(sfVector2f, float, int**, sfVector2i);
sfVector2f move_forward(sfVector2f, float, float);

/*
** RAYCAST
*/

int is_wall(int**, sfVector2i, sfVector2i, int);
float ray_ver(sfVector2f, float, int**, sfVector2i);
float ray_hor(sfVector2f, float, int**, sfVector2i);

/*
** TOOLS
*/

char **my_str_to_wordtab(char*);
char **my_cacalloc(int, int);
int **my_iaialloc(int, int);
int my_get_nbr(char*);
int my_strlen(char*);
char *my_calloc(int);
int *my_ialloc(int);
int is_num(char);

#endif /* !_WOLF3D_H_ */
