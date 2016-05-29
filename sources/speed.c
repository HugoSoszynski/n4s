/*
** speed.c for CPE_2015_n4s in /home/soszyn_h/rendu/CPE/CPE_2015_n4s/sources/speed.c
**
** Made by Hugo SOSZYNSKI
** Login   <hugo.soszynski@epitech.eu>
**
** Started on  Sat May 28 08:34:23 2016 Hugo SOSZYNSKI
** Last update Sat May 28 08:34:23 2016 Hugo SOSZYNSKI
*/

#include 	"ia.h"

void		set_speed(t_car *car)
{
  int		cpt;
  float		average;

  cpt = 10;
  average = 0;
  while (cpt < 22)
  {
    average += car->lidar[cpt];
    cpt++;
  }
  average /= 12;
  average -= 150;
  if (average <= 0)
  {
    car->forward = 0;
    car->track_cleared = true;
    return ;
  }
  average /= 4300;
  car->forward = average;
}