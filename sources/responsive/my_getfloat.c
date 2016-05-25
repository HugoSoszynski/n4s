/*
** my_getfloat.c for CPE_2015_n4s in /home/soszyn_h/rendu/CPE/CPE_2015_n4s/sources/my_getfloat.c
**
** Made by Hugo SOSZYNSKI
** Login   <hugo.soszynski@epitech.eu>
**
** Started on  Fri Apr 29 13:25:33 2016 Hugo SOSZYNSKI
** Last update Fri Apr 29 13:25:33 2016 Hugo SOSZYNSKI
*/

#include	<stdbool.h>

static int	is_num_or_point(char car)
{
  if ((car >= '0' && car <= '9') || car == '.')
    return (0);
  else
    return (1);
}

static int 	get_digit(char *str, float *nb, bool *point, unsigned int *dec)
{
  if (is_num_or_point(*str))
    return (1);
  if (*str == '.' && *point == false)
    *point = true;
  else if (*str == '.' && *point == true)
    return (1);
  else if (*point == false)
  {
    *nb *= 10;
    *nb += *str - '0';
  }
  else
  {
    *dec += 1;
    *nb += (float)((*str - '0')) / (float)(*dec * 10);
  }
  return (0);
}

float		my_getfloat(char *str)
{
  unsigned int	cpt;
  bool		point;
  float		nb;
  float		sign;
  unsigned int	dec;

  point = false;
  nb = 0;
  dec = 0;
  cpt = 0;
  sign = 1;
  if (*str == '-')
  {
    sign = -1;
    cpt = 1;
  }
  while (str[cpt] != '\0')
  {
    if (get_digit(&(str[cpt]), &nb, &point, &dec))
      return (nb * sign);
    cpt++;
  }
  return (nb * sign);
}
