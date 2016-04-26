/*
** n4s.h for CPE_2015_n4s in /home/soszyn_h/rendu/CPE/CPE_2015_n4s/includes/n4s.h
**
** Made by Hugo SOSZYNSKI
** Login   <hugo.soszynski@epitech.eu>
**
** Started on  Tue Apr 26 07:58:08 2016 Hugo SOSZYNSKI
** Last update Tue Apr 26 07:58:08 2016 Hugo SOSZYNSKI
*/

#ifndef			IA_H_
# define		IA_H_

typedef struct		s_car
{
  float			forward;
  float			backward;
  float			wheels_dir;
  float			lidar[32];
  int			cycle_wait;
}			t_car;

#endif			/* !IA_H_ */
