/*
** mainloop.c for CPE_2015_n4s in /home/soszyn_h/rendu/CPE/CPE_2015_n4s/sources/mainloop.c
**
** Made by Hugo SOSZYNSKI
** Login   <hugo.soszynski@epitech.eu>
**
** Started on  Tue Apr 26 09:12:12 2016 Hugo SOSZYNSKI
** Last update Tue Apr 26 09:12:12 2016 Hugo SOSZYNSKI
*/

#include	"ia.h"

int		mainloop(t_car *car)
{
  while (car->track_cleared == false)
  {
    if (get_info_lidar(car) != SUCCESS)
      return (ERROR);
    // Fonction de calcul
    if (car_forward(car) !=SUCCESS)
      return (ERROR);
    if (wheels_dir(car) != SUCCESS)
      return (ERROR);
  }
  return (SUCCESS);
}