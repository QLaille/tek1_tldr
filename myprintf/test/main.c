/*
** main.c for test in /home/QuentinLaille/Semester_1/B1-USP/PSU_2016_my_printf
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Wed Nov  9 20:13:16 2016 Quentin Laille
** Last update Sun Nov 20 12:10:00 2016 Quentin Laille
*/

#include "my.h"
#include <stdio.h>

int	main(int ac, char **av)
{
  int	a;
  char	*str;

  str = "OSUDISUDHisuzhzé20]}";
  a = 456;
  my_printf("oui%p\n",a);
  my_printf("%S\n",str);
  my_printf("%X\n",a);
  my_printf("Oui-%S-%d-\n",str,a);
  my_printf("astek%42moulinette\n");
  my_printf("astek%moulinette42\n");
  my_printf("%noui\n");
  return (0);
}
