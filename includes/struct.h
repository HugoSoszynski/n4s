/*
** struct.h for CPE_2015_n4s in /home/soszyn_h/rendu/CPE/CPE_2015_n4s/includes/struct.h
**
** Made by Hugo SOSZYNSKI
** Login   <hugo.soszynski@epitech.eu>
**
** Started on  Mon May 09 08:02:40 2016 Hugo SOSZYNSKI
** Last update Mon May 09 08:02:40 2016 Hugo SOSZYNSKI
*/

#ifndef			STRUCT_H_
# define		STRUCT_H_

# include		<stdbool.h>

typedef struct		s_car
{
  float			forward;
  float			backward;
  float			wheels_dir;
  float			lidar[32];
  int			cycle_wait;
  bool			track_cleared;
}			t_car;

#endif			/* !STRUCT_H_ */
