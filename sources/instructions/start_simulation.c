/*
** start_simulation.c for CPE_2015_n4s in /home/soszyn_h/rendu/CPE/CPE_2015_n4s/sources/instructions/start_simulation.c
**
** Made by Hugo SOSZYNSKI
** Login   <hugo.soszynski@epitech.eu>
**
** Started on  Tue May 24 17:17:49 2016 Hugo SOSZYNSKI
** Last update Tue May 24 17:17:49 2016 Hugo SOSZYNSKI
*/

#include 	<unistd.h>
#include	<malloc.h>
#include 	"ia.h"

int		start_simulation()
{
  char		*response;
  int		ret;

  if (write(1, "START_SIMULATION\n", 17) < 0)
    return (error_int("Can't send instructions to API"));
  if ((response = get_next_line(0)) == NULL)
    return (error_int("Can't get the response"));
  ret = parse_answer_for_type_1(response);
  free(response);
  if (ret != SUCCESS)
    return (ERROR);
  return (SUCCESS);
}