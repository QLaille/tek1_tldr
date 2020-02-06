/*
** cpu_sumline.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/cpu/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Sun Feb 26 18:19:37 2017 Quentin Laille
** Last update Sun Feb 26 18:20:45 2017 Quentin Laille
*/

#include "matchstick.h"

int	cpu_sumline(int *arr)
{
  int	i;
  int	ret;

  i = 0;
  ret = 0;
  while (arr[i] != -1)
  {
    if (arr[i] != 0)
    ret += 1;
    i += 1;
  }
  return (ret);
}
