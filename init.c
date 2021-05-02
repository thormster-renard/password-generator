/*
** init.c for init in /home/thormster/Dev/C/passwordGen
** 
** Made by thormster
** Login   <thormster@epitech.net>
** 
** Started on  Sun May  2 15:16:08 2021 thormster
** Last update Sun May  2 23:23:38 2021 thormster
*/

#include	"header.h"

t_password	*init_s_password(char *av1, char *av2)
{
  t_password	*p;

  if ((p = malloc(8 * sizeof(t_password))) == NULL)
    return (NULL);
  if ((p->type = malloc(xstrlen(av1) * sizeof(char) + 1)) == NULL)
    return (NULL);
  xstrcpy(p->type, av1);
  p->len = get_len(av2);
  if (((p->len < 1 || p->len > 9999999)) || (p->len == ERR))
  {
    xputstr("Warning: set address range perms OR bad arguments\n");
    free(p->type);
    free(p);
    return (NULL);
  }
  p->possibilities = -1;
  p->r1low = -1;
  p->r1high = -1;
  p->r2low = -1;
  p->r2high = -1;
  if ((p->pwd = malloc(p->len * sizeof(char) + 1)) == NULL)
    return (NULL);
  return (p);
}
