/*
** getnextline.h for get_next_line in /home/anteron/Tek1/CPE/CPE_2016_getnextline/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Tue Jan  3 15:34:34 2017 Quentin Laille
** Last update Sun Feb 26 19:18:36 2017 Quentin Laille
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

#ifndef READ_SIZE
# define READ_SIZE 4096
#endif /* !READ_SIZE */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

char *get_next_line(const int);
char *get_file(int);

#endif /* !GET_NEXT_LINE_H_ */
