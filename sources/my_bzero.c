/*
** my_bzero.c for CPE_2015_n4s in /home/soszyn_h/rendu/CPE/CPE_2015_n4s/sources/my_bzero.c
**
** Made by Hugo SOSZYNSKI
** Login   <hugo.soszynski@epitech.eu>
**
** Started on  Tue Apr 26 09:20:51 2016 Hugo SOSZYNSKI
** Last update Tue Apr 26 09:20:51 2016 Hugo SOSZYNSKI
*/

#include	<stddef.h>

void		my_bzero(void *_tab, size_t size)
{
  char		*tab;
  size_t	cpt;

  cpt = 0;
  while (cpt < size)
  {
    tab[cpt] = 0;
    cpt++;
  }
}