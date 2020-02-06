/*
** fill_square.c for bsq in /CPE_2016_BSQ/functions/scan
**
** Made by timbus
** Login   <private>
**
** Started on  Wed Dec  7 11:15:28 2016 timbus
** Last update Tue Dec 13 11:38:41 2016 timbus
*/

char	**fill_square(char **tab, int x, int y, int size)
{
  int	a;
  int	b;

  a = 0;
  b = 0;
  while (b < size)
    {
      while (a < size)
	{
	  (tab[y + b][x + a]) = 'x';
	  a += 1;
	}
      a = 0;
      b += 1;
    }
  return (tab);
}
