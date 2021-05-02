/*
** main.c<passwordGen2> for main in /home/thormster/Dev/C/passwordGen
** 
** Made by thormster
** Login   <thormster@epitech.net>
** 
** Started on  Sun May  2 14:49:58 2021 thormster
** Last update Sun May  2 23:21:16 2021 thormster
*/

#include	"header.h"

int		get_len(char *l)
{
  int		len;
  int		i;

  i = 0;
  while (l[i] != '\0')
  {
    if (l[i] < 48 || l[i] > 57)
      return (ERR);
    i += 1;
  }
  len = my_atoi(l);
  return (len);
}

void		free_struct(t_password *p)
{
  free(p->type);
  free(p->pwd);
  free(p);
}

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

int		get_type(t_password *p)
{
  if ((strncmp(p->type, "alpha", 5)) == 0)
  {
    if ((p->pwd = genPwd(p, 65, 90, 97, 122)) == NULL)
      return (ERR);
    p->possibilities = passwordPossibility(p->len, 52);
  }
  else if ((strncmp(p->type, "all", 3)) == 0)
  {
    if ((p->pwd = genPwd(p, 33, 35, 35, 126)) == NULL)
      return (ERR);
    p->possibilities = passwordPossibility(p->len, 93);
  }
  else if ((strncmp(p->type, "numalpha", 8)) == 0)
  {
    if ((p->pwd = genPwd(p, 48, 57, 65, 90)) == NULL)
      return (ERR);
    p->possibilities = passwordPossibility(p->len, 62);
  }
  else
  {
    free_struct(p);
    return (ERR);
  }
  return (0);
}

int		main(int ac, char **av)
{
  t_password	*p;

  if (ac == 3)
  {
    if ((p = init_s_password(av[1], av[2])) == NULL)
      return (ERR);
    if ((get_type(p)) == ERR)
      return (ERR);
    display_res(p);
    free_struct(p);
  }
  else
    usage();
  return (0);
}
