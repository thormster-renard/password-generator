/*
** xput.c for xput in /home/thormster/Dev/C/passwordGen
**
** Made by thormster
** Login   <thormster@epitech.net>
**
** Started on  Sun May  2 00:07:51 2021 thormster
** Last update Sun May  2 00:08:15 2021 thormster
*/

#include	"header.h"

void		xputchar(char c)
{
  write(1, &c, 1);
}

void		xputstr(char *s)
{
  int		i;

  i = 0;
  while (s[i] != '\0')
  {
    xputchar(s[i]);
    i += 1;
  }
}
