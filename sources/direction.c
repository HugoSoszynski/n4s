/*
** direction.c for CPE_2015_n4s in /home/soszyn_h/rendu/CPE/CPE_2015_n4s/sources/direction.c
**
** Made by Hugo SOSZYNSKI
** Login   <hugo.soszynski@epitech.eu>
**
** Started on  Sat May 28 09:27:33 2016 Hugo SOSZYNSKI
** Last update Sat May 28 09:27:33 2016 Hugo SOSZYNSKI
*/

#include 	<math.h>
#include <stdio.h>
#include 	"ia.h"

static float	resolv_polynom(float *polynom)
{
  float		delta;
  float		result;

  delta = 4 * polynom[0];
  if ((result = (sqrtf(delta)) / (2 * polynom[0])) <= 1 &&
      result >= 0)
    return (result);
  result = (-sqrtf(delta)) / (2 * polynom[0]);
  return (result);
}

void		set_direction(t_car *car)
{
  float		vector_left[2];
  float		vector_right[2];
  float		direction_point[2];
  float		polynom[3];
  float		result;

  vector_left[0] = -0.5f * car->lidar[0];
  vector_left[1] = -0.8660f * vector_left[0];
  vector_right[0] = 0.5f * car->lidar[31];
  vector_right[1] = 0.8660f * vector_right[0];
  direction_point[0] = (vector_left[0] + vector_right[0]) / 2;
  direction_point[1] = (vector_left[1] + vector_right[1]) / 2;
  polynom[0] = direction_point[0] * direction_point[0] +
	       direction_point[1] * direction_point[1];
  result = resolv_polynom(polynom);
  car->wheels_dir = -direction_point[0] * result * 0.75f;
}