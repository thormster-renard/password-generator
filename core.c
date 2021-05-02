/*
** core.c for core in /home/thormster/Dev/C/passwordGen
** 
** Made by thormster
** Login   <thormster@epitech.net>
** 
** Started on  Sun May  2 15:19:02 2021 thormster
** Last update Sun May  2 23:03:58 2021 thormster
*/

#include	"header.h"

double		passwordPossibility(int len, int pool)
{
  double	pos;

  pos = pow(pool, len);
  return (pos);
}

int		randomInRanges(int r1low, int r1high, int r2low, int r2high)
{
  int		range1size;
  int		range2size;
  int		numValues;
  int		rawRandom;

  range1size = 1 + r1high - r1low;
  range2size = 1 + r2high - r2low;
  numValues = range1size + range2size;
  rawRandom = rand() % (numValues);
  if (rawRandom < range1size)
    return (r1low + rawRandom);
  rawRandom -= range1size;
  if (rawRandom < range2size)
    return (r2low + rawRandom);
  rawRandom -= range1size;
  return (ERR);
}

char		*genPwd(t_password *p, int r1low, int r1high, int r2low, int r2high)
{
  struct	timeval t;
  int		x;

  x = 0;
  gettimeofday(&t, NULL);
  srand((t.tv_sec * 1000) + (t.tv_usec / 1000));
  while (x <= (p->len - 1))
  {
    p->pwd[x] = (char)randomInRanges(r1low, r1high, r2low, r2high);
    x += 1;
  }
  p->pwd[x] = '\0';
  return (p->pwd);
}

int		display_time(int time, char *unit)
{
  printf("  %d %s\n", time, unit);
  xputstr("(with cycle of 1x10^8 pass/sec)\n");
  return (0);
}

int		cracktime(double possibility, float cycle)
{
  double	time;

  time = round(possibility / cycle);
  if (time < 60)
    return (display_time(time, "seconds"));
  time = round(time / 60);
  if (time < 60)
    return (display_time(time, "minutes"));
  time = round(time / 60);
  if (time >= 1 && time < 24)
    return (display_time(time, "hours"));
  time = round(time / 24);
  if (time >= 1 && time < 365)
    return (display_time(time, "days"));
  time = round(time / 365);
  if (time >= 1 && time < 1000000)
    return (display_time(time, "years"));
  else
    xputstr("Way to much time to be worthly spending time on it\n");
  return (ERR);
}
