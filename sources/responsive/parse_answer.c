/*
** parse_answer.c for CPE_2015_n4s in /home/loens_g/Rendu/CPE_2015_n4s/sources/parse_answer.c
**
** Made by Grégoire LOENS
** Login   <gregoire.loens@epitech.eu>
**
** Started on  Wed May 25 15:11:00 2016 Grégoire LOENS
** Last update Wed May 25 15:11:00 2016 Grégoire LOENS
*/

#include 	<stdlib.h>
#include 	<unistd.h>
#include	"ia.h"
#include	"struct.h"

int		parse_answer_for_type_2(t_car *car, char *answer)
{
  char		**answer_tab;
  int		tab_counter;
  int		counter;

  counter = 0;
  tab_counter = 3;
  answer_tab = my_str_to_wordtab(answer);
  if (answer_tab[1][0] == 'K')
  {
    write(2, &answer_tab[2], my_strlen(answer_tab[2]));
    return (ERROR);
  }
  while (counter < 32)
  {
    car->lidar[counter] = my_getfloat(answer_tab[tab_counter]);
    counter++;
    tab_counter++;
  }
  free(answer_tab);
  return (SUCCESS);
}

int		parse_answer_for_type_1(char *answer)
{
  char		**answer_tab;

  if ((answer_tab = my_str_to_wordtab(answer)) == NULL)
    return (error_int("Can't malloc"));
  if (answer_tab[1][0] == 'K')
  {
    write(2, &answer_tab[2], my_strlen(answer_tab[2]));
    return (ERROR);
  }
  free(answer_tab);
  return (SUCCESS);
}