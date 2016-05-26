/*
** car_forward.c for CPE_2015_n4s in /home/soszyn_h/rendu/CPE/CPE_2015_n4s/sources/instructions/car_forward.c
**
** Made by Hugo SOSZYNSKI
** Login   <hugo.soszynski@epitech.eu>
**
** Started on  Thu May 26 11:40:09 2016 Hugo SOSZYNSKI
** Last update Thu May 26 11:40:09 2016 Hugo SOSZYNSKI
*/

#include 	<unistd.h>
#include	<malloc.h>
#include 	"ia.h"

int		car_forward(t_car *car)
{
  char		*response;

  if (write(1, "CAR_FORWARD:", 12) < 0)
    return (error_int("Can't send instructions to API"));
  if (my_putfloat(car->forward, 4) != SUCCESS)
    return (error_int("Can't send instructions to API"));
  if (write(1, "\n", 1) < 0)
    return (error_int("Can't send instructions to API"));
  if ((response = get_next_line(0)) == NULL)
    return (error_int("Can't get the response"));
  // Check de la ligne renvoyée
  free(response);
  return (SUCCESS);
}