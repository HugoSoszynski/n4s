/*
** main.c for n4s in /home/soszyn_h/rendu/CPE/CPE_2015_n4s
**
** Made by Hugo SOSZYNSKI
** Login   <hugo.soszynski@epitech.eu>
**
** Started on  Mon Apr 25 10:55:46 2016 Hugo SOSZYNSKI
** Last update Mon Apr 25 15:41:48 2016 Hugo SOSZYNSKI
*/

#include	"ia.h"

static void	init_car(t_car *car)
{
  car->forward = 0.0;
  car->backward = 0.0;
  car->wheels_dir = 0.0;
  my_bzero(car->lidar, 32 * sizeof(float));
  car->cycle_wait = 0;
}

int		main()
{
  t_car		car;

  init_car(&car);
  mainloop(&car);
  return (SUCCESS);
}
