/*
** numerize.c for bsq in CPE_2016_BSQ/functions/scan/horizontal_method/
**
** Made by timbus
** Login   <private>
**
** Started on  Sat Dec 10 14:15:53 2016 timbus
** Last update Wed Dec 14 16:23:08 2016 timbus
*/

#include "my_bsq.h"

char **numerize(t_data data)
{
	int x;
	int y;
	int cur;

	y = 0;
	while (y < data.size_y)
	{
		cur = 1;
		x = data.size_x - 1;
		while (x >= 0)
		{
			if (data.tab[y][x] == '.')
			data.tab[y][x] = cur + 48;
			else
			{
				data.tab[y][x] = 48;
				cur = 0;
			}
			cur += 1;
			x -= 1;
		}
		y += 1;
	}
	return (data.tab);
}
