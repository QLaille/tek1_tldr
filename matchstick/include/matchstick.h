/*
** matchstick.h for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/include/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Mon Feb 13 09:08:03 2017 Quentin Laille
** Last update Sun Feb 26 19:44:06 2017 Quentin Laille
*/

#ifndef _MATCHSTICK_H_
# define _MATCHSTICK_H_

#include <unistd.h>
#include <stdlib.h>
#include "my_printf.h"
#include "get_next_line.h"

#define PLA_TURN  "Your turn:"
#define CPU_TURN  "AI's turn..."
#define CPU_PIK1  "AI removed "
#define CPU_PIK2  " match(es) from line "
#define CPU_LOSE  "I lost... snif... but I'll get you next time!!"
#define CPU_WIN_  "You lost, too bad..."
#define ERR_ARGS  "Error: invalid arguments"
#define ERR_EMP   "Error: no enough matches on that line"
#define ERR_OUTR  "Error: this line is out of range"
#define ERR_PNBR  "Error: invalid input (positive number expected)"
#define ERR_SIZ1  "Error: you cannot remove more than "
#define ERR_SIZ2  "matches per turn"

typedef struct s_data
{
  int          *arr;
  int          height;
  int          pick_max;
  int          base_length;
}              t_data;

/*
** FUNCTIONS
** LIST
*/

/*
**SRC
*/

/*~end_game.c~*/
void end_game(int);

/*~game_time.c~*/
int game_time(t_data);

/*~main.c~*/
int main(int, char**);

/*~matchstick.c~*/
int matchstick(char*, char*);

/*
** CPU
*/

/*~cpu_clean.c~*/
void cpu_clean(t_data*, int*, int*);

/*~cpu_find_line.c~*/
void cpu_find_line(t_data*, int*, int*);

/*~cpu_finish_him.c~*/
void cpu_finish(t_data*, int*, int*);

/*~cpu_normalize.c~*/
int cpu_normalize(t_data*, int*, int*);

/*~cpu_pick_line.c~*/
void cpu_pick_line(t_data*, int*, int*);

/*~cpu_pick_match.c~*/
void cpu_pick_match(t_data*, int*, int*);

/*~cpu_sumline.c~*/
int cpu_sumline(int*);

/*~cpu_time.c~*/
int cpu_turn(t_data*);

/*
** DISPLAY
*/

/*~display.c~*/
void disp_map(t_data);
void disp_msg(char*);

/*~star_line.c~*/
void star_line(int);

/*~story_line.c~*/
void story_line(t_data, int);

/*
** OPERATE
*/

/*~is_empty.c~*/
int is_empty();

/*~pick.c~*/
int pick(t_data*, int, int);

/*
** PARSING
*/

/*~parsing_time.c~*/
t_data parsing_time(int, int);

/*
** PLAYER
*/

/*~check_player_line.c~*/
int check_player_line(t_data*, int);

/*~check_player_number.c~*/
int check_player_number(t_data*, int, int);

/*~get_line.c~*/
int get_line(t_data*);

/*~get_number.c~*/
int get_number(t_data*, int);

/*~player_time.c~*/
int player_turn(t_data*);

/*
** TOOLS
*/

/*~isnbr.c~*/
int isnbr(char*);

/*~isneg.c~*/
int isneg(char*);

/*~my_calloc.c~*/
char *my_calloc(int);

/*~my_error.c~*/
void my_error(char*);

/*~my_getnbr.c~*/
int my_getnbr(char*);

/*~my_strlen.c~*/
int my_strlen(char*);

/*~my_strncat.c~*/
char *my_strncat(char*, char*, int);

#endif /* !_MATCHSTICK_H_ */
