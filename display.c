/*
** display.c for display in /home/thormster/Dev/C/passwordGen
** 
** Made by thormster
** Login   <thormster@epitech.net>
** 
** Started on  Sun May  2 23:36:09 2021 thormster
** Last update Sun May  2 23:36:43 2021 thormster
*/

#include	"header.h"

void		display_res(t_password *p)
{
  xputstr("################################################################\n");
  xputstr("Password: ");
  xputstr(p->pwd);
  xputchar('\n');
  xputstr("\nThe total number of passwords possible :  ");
  printf("%.1e\n\n", p->possibilities);
  xputstr("Time required to crack this pass :");
  cracktime(p->possibilities, 100000000000);
  xputstr("################################################################\n");
}

int		display_time(int time, char *unit)
{
  printf("  %d %s\n", time, unit);
  xputstr("(with cycle of 1x10^8 pass/sec)\n");
  return (0);
}
