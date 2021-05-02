/*
** my.c for my in /home/thormster/Dev/C/passwordGen
** 
** Made by thormster
** Login   <thormster@epitech.net>
** 
** Started on  Sun May  2 22:15:15 2021 thormster
** Last update Sun May  2 23:03:49 2021 thormster
*/

#include	"header.h"

char		*xstrcpy(char *dest, char *src)
{
  int		i;

  i = 0;
  while (src[i])
  {
    dest[i] = src[i];
    i += 1;
  }
  dest[i] = '\0';
  return (dest);
}

int		xstrlen(char *s)
{
  int		i;

  i = 0;
  while (s[i] != '\0')
    i += 1;
  return (i);
}

int		my_atoi(char *s)
{
  int		res;
  int		i;

  i = 0;
  res = 0;
  while (s[i] != '\0')
  {
    res = res * 10 + s[i] - '0';
    i += 1;
  }
  return (res);
}
