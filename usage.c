/*
** usage.c for usage in /home/thormster/Dev/C/passwordGen
** 
** Made by thormster
** Login   <thormster@epitech.net>
** 
** Started on  Sun May  2 14:54:50 2021 thormster
** Last update Sun May  2 23:03:02 2021 thormster
*/

#include	"header.h"

void		usage(void)
{
  xputstr("passwd-gen [TYPE] [LENGTH]\n\n");
  xputstr(" [LENGTH] between 1 and imagination\n");
  xputstr(" [TYPE]  <all> <alpha> OR <numalpha>\n");
  xputstr("         'all',	 all ascii digits\n");
  xputstr("         'alpha',    JUST alpha digits (Upper and lower case)\n");
  xputstr("         'numalpha', alphabetic AND number digits\n");
}
