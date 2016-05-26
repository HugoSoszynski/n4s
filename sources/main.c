/*
** main.c for n4s in /home/soszyn_h/rendu/CPE/CPE_2015_n4s
**
** Made by Hugo SOSZYNSKI
** Login   <hugo.soszynski@epitech.eu>
**
** Started on  Mon Apr 25 10:55:46 2016 Hugo SOSZYNSKI
** Last update Mon Apr 25 15:41:48 2016 Hugo SOSZYNSKI
*/

#include 	<unistd.h>
#include	"ia.h"

static void	init_car(t_car *car)
{
  car->forward = 0.3;
  car->backward = 0.0;
  car->wheels_dir = -1.0f;
  my_bzero(car->lidar, 32 * sizeof(double));
  car->cycle_wait = 0;
}

int		main()
{
  t_car		car;

  init_car(&car);
  if (start_simulation())
    return (ERROR);
  car_forward(&car);
  wheels_dir(&car);
  sleep(2);
  if (stop_simulation())
    return (ERROR);
  return (SUCCESS);
}
