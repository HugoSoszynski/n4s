/*
** mainloop.c for CPE_2015_n4s in /home/soszyn_h/rendu/CPE/CPE_2015_n4s/sources/mainloop.c
**
** Made by Hugo SOSZYNSKI
** Login   <hugo.soszynski@epitech.eu>
**
** Started on  Tue Apr 26 09:12:12 2016 Hugo SOSZYNSKI
** Last update Tue Apr 26 09:12:12 2016 Hugo SOSZYNSKI
*/

#include	<malloc.h>
#include	"ia.h"

int		mainloop(t_car *car)
{
  char		*line;

  (void)(car);
  while ((line = get_next_line(0)) != NULL)
  {
    free(line);
  }
  return (SUCCESS);
}