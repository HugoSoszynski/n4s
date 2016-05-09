/*
** error.c for CPE_2015_n4s in /home/soszyn_h/rendu/CPE/CPE_2015_n4s/sources/error.c
**
** Made by Hugo SOSZYNSKI
** Login   <hugo.soszynski@epitech.eu>
**
** Started on  Mon May 02 08:11:16 2016 Hugo SOSZYNSKI
** Last update Thu May 05 15:20:00 2016 Hugo SOSZYNSKI
*/

#include	<unistd.h>
#include 	<stddef.h>
#include	"ia.h"

int 		error_int(const char *msg)
{
  write(2, msg, my_strlen(msg));
  write(2, "\n", 1);
  return (ERROR);
}

void 		*error_null(const char *msg)
{
  write(2, msg, my_strlen(msg));
  write(2, "\n", 1);
  return (NULL);
}