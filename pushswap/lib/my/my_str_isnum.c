/*
** my_str_isnum.c for my_str_isnum.c in /home/QuentinLaille/CPool/CPool_Day06
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Mon Oct 10 17:31:24 2016 Quentin Laille
** Last update Wed Nov 16 13:37:49 2016 Quentin Laille
*/

int	my_str_isnum(char *str)
{
  int	it_is;
  int	n;

  n = 0;
  it_is = 1;
  while (str[n] != '\0')
    {
      if ((str[n] < 48) || (str[n] > 58))
	it_is = 0;
      n += 1;
    }
  return (it_is);
}
