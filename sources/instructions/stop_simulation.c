/*
** stop_simulation.c for CPE_2015_n4s in /home/soszyn_h/rendu/CPE/CPE_2015_n4s/sources/instructions/stop_simulation.c
**
** Made by Hugo SOSZYNSKI
** Login   <hugo.soszynski@epitech.eu>
**
** Started on  Tue May 24 17:35:12 2016 Hugo SOSZYNSKI
** Last update Tue May 24 17:35:12 2016 Hugo SOSZYNSKI
*/

#include 	<unistd.h>
#include	<malloc.h>
#include 	"ia.h"

int		stop_simulation(t_car *car)
{
  char		*response;

  if (write(1, "STOP_SIMULATION\n", 16) < 0)
    return (error_int("Can't send instructions to API"));
  if ((response = get_next_line(0)) == NULL)
    return (error_int("Can't get the response"));
  // Check de la ligne renvoyée
  free(response);
  return (SUCCESS);
}