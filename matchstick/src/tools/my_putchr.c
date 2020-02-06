/*
** my_putchar.c for my_putchar in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/tools/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Sun Feb 19 18:20:37 2017 Quentin Laille
** Last update Sun Feb 19 18:20:51 2017 Quentin Laille
*/

#include "matchstick.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
