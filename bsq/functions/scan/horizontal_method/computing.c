/*
** commuting.c for bsq in /CPE_2016_BSQ/functions/scan/horizontal_method/
**
** Made by timbus
** Login   <private>
**
** Started on  Tue Dec 13 17:24:53 2016 timbus
** Last update Sat Dec 17 09:13:43 2016 timbus
*/

#include "my_bsq.h"

t_big_square init_t_big_square()
{
	t_big_square ret;

	ret.top_l = my_ialloc(2);
	ret.bot_r = my_ialloc(2);
	ret.size = 0;
	return (ret);
}

void possible(t_big_square *sqr, char **tab, int y, int x)
{
	int cur;
	int size;

	cur = 0;
	size = tab[y][x] - 48;
	if (size > sqr->size)
	{
		while (cur < size && (tab[y + cur][x] - 48) >= size)
		cur += 1;
	}
	if (cur == size)
	{
		cur -= 1;
		sqr->size = size;
		sqr->top_l[0] = y;
		sqr->top_l[1] = x;
		sqr->bot_r[0] = y + cur;
		sqr->bot_r[1] = x + cur;
	}
}

t_big_square coords_bigger(char **tab)
{
	t_big_square ret;
	int x;
	int y;

	y = 0;
	ret = init_t_big_square();
	while (tab[y][x] != '\0')
	{
		x = 0;
		while ((tab[y][x]) != '\n')
		{
			possible(&ret, tab, y, x);
			x += 1;
		}
		y += 1;
	}
	return (ret);
}

int is_in(t_big_square square, int y, int x)
{
	if (x < square.top_l[1] || x > square.bot_r[1])
	return (0);
	if (y < square.top_l[0] || y > square.bot_r[0])
	return (0);
	return (1);
}

char **computing(t_data data, char **ret)
{
	t_big_square square;
	int x;
	int y;

	y = 0;
	x = 0;
	square = coords_bigger(data.tab);
	while (ret[y][x] != '\0')
	{
		while ((ret[y][x]) != '\n')
		{
			if (is_in(square, y, x) == 1)
			ret[y][x] = 'x';
			else if (ret[y][x] == '0')
			ret[y][x] = 'o';
			else
			ret[y][x] = '.';
			x += 1;
		}
		x = 0;
		y += 1;
	}
	return (ret);
}
