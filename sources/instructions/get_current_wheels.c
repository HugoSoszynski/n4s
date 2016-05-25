/*
** get_current_wheels.c for CPE_2015_n4s in /home/soszyn_h/rendu/CPE/CPE_2015_n4s/sources/instructions/get_current_wheels.c
**
** Made by Hugo SOSZYNSKI
** Login   <hugo.soszynski@epitech.eu>
**
** Started on  Wed May 25 15:16:40 2016 Hugo SOSZYNSKI
** Last update Wed May 25 15:16:40 2016 Hugo SOSZYNSKI
*/

#include 	<unistd.h>
#include	<malloc.h>
#include 	"ia.h"

int		get_current_wheels(t_car *car)
{
  char		*response;

  if (write(1, "GET_CURRENT_WHEELS\n", 17) < 0)
    return (error_int("Can't write"));
  if ((response = get_next_line(0)) == NULL)
    return (error_int("Can't get the response"));
  // Check de la ligne renvoyée
  free(response);
  return (SUCCESS);
}