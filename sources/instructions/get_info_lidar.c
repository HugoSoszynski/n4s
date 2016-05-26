/*
** get_info_lidar.c for CPE_2015_n4s in /home/soszyn_h/rendu/CPE/CPE_2015_n4s/sources/instructions/get_info_lidar.c
**
** Made by Hugo SOSZYNSKI
** Login   <hugo.soszynski@epitech.eu>
**
** Started on  Tue May 24 17:44:49 2016 Hugo SOSZYNSKI
** Last update Tue May 24 17:44:49 2016 Hugo SOSZYNSKI
*/

#include 	<unistd.h>
#include	<malloc.h>
#include 	"ia.h"

int		get_info_lidar(t_car *car)
{
  char		*response;

  if (write(1, "GET_INFO_LIDAR\n", 15) < 0)
    return (error_int("Can't send instructions to API"));
  if ((response = get_next_line(0)) == NULL)
    return (error_int("Can't get the response"));
  // Check de la ligne renvoyée
  free(response);
  return (SUCCESS);
}