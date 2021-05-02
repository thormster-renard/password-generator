/*
** header.h for header in /home/thormster/Dev/C/passwordGen
** 
** Made by thormster
** Login   <thormster@epitech.net>
** 
** Started on  Sun May  2 21:53:13 2021 thormster
** Last update Sun May  2 23:38:13 2021 thormster
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

/* xput.c */
void		xputchar(char);
void		xputstr(char*);

/* my.c */
int		my_atoi(char*);
int		xstrlen(char*);
char		*xstrcpy(char*, char*);

/* init.c */
t_password	*init_s_password(char*, char*);

/* core.c */
int		randomInRanges(int, int, int, int);
char		*genPwd(t_password*, int, int, int, int);
double		passwordPossibility(int, int);
int		cracktime(double, float);

/* display.c */
void		display_res(t_password*);
int		display_time(int, char*);

/* usage.c */
void		usage(void);

/* main.c */
int		get_len(char*);
int		get_type(t_password*);
void		free_struct(t_password*);

#endif /* !HEADER_H_ */
