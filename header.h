/*
** header.h for header in /home/thormster/Dev/C/passwordGen
** 
** Made by thormster
** Login   <thormster@epitech.net>
** 
** Started on  Sun May  2 21:53:13 2021 thormster
** Last update Sun May  2 23:21:11 2021 thormster
*/

#ifndef		_HEADER_H_
# define	_HEADER_H_

# include	<math.h>
# include	<stdio.h>
# include	<stdlib.h>
# include	<string.h>
# include	<sys/time.h>
# include	<time.h>
# include	<unistd.h>

#define		ERR	-1

typedef	struct	s_password
{
  double	possibilities;
  char		*type;
  char		*pwd;
  int		len;
  int		r1low;
  int		r1high;
  int		r2low;
  int		r2high;
}		t_password;

int		my_atoi(char*);
t_password	*init_s_password(char*, char*);
void		xputchar(char);
void		xputstr(char*);
int		randomInRanges(int, int, int, int);
char		*genPwd(t_password*, int, int, int, int);
char		pick_a_digit(int, int);
void		usage(void);
double		passwordPossibility(int, int);
int		cracktime(double, float);
char		*def_gen_pass(int);
int		get_len(char*);
void		display_res(t_password*);
int		display_time(int, char*);
int		xstrlen(char*);
char		*xstrcpy(char*, char*);
int		get_type(t_password*);

#endif /* !HEADER_H_ */
