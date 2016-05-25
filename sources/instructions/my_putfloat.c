/*
** my_putfloat.c for CPE_2015_n4s in /home/soszyn_h/rendu/CPE/CPE_2015_n4s/sources/my_putfloat.c
**
** Made by Hugo SOSZYNSKI
** Login   <hugo.soszynski@epitech.eu>
**
** Started on  Mon May 02 08:25:26 2016 Hugo SOSZYNSKI
** Last update Mon May 02 08:25:26 2016 Hugo SOSZYNSKI
*/

#include 	<unistd.h>

void		my_putnbr(int nb)
{
  if (nb < 0)
  {
    write(1, "-", 1);
    nb *= -1;
  }
  if (nb >= 10)
    my_putnbr(nb / 10);
  nb = nb % 10 + '0';
  write(1, &nb, 1);
}

void		my_putfloat(float nb, int nb_dec)
{
  int		dec;
  char		digit;

  if (nb < 0)
  {
    write(1, "-", 1);
    nb *= -1;
  }
  my_putnbr((int)(nb));
  write(1, ".", 1);
  dec = 0;
  while (dec < nb_dec)
  {
    nb *= 10;
    digit = (char)((int)(nb) % 10) + '0';
    write(1, &digit, 1);
    dec++;
  }
}