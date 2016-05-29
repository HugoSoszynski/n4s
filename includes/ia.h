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

# include		<stddef.h>
# include		"get_next_line.h"
# include		"struct.h"

# ifndef 		SUCCESS
#  define		SUCCESS			(0)
# endif			/* !SUCCESS */

# ifndef 		ERROR
#  define		ERROR			(1)
# endif			/* !ERROR */

void			my_bzero(void *_tab, size_t size);
int			mainloop(t_car *car);
float			my_getfloat(char *str);
int			my_strlen(const char *str);
void 			*error_null(const char *msg);
int 			error_int(const char *msg);
int			my_putnbr(int nb);
int			my_putfloat(float nb, int nb_dec);
int			get_info_lidar(t_car *car);
int			stop_simulation(t_car *car);
int			start_simulation(t_car *car);
int			car_forward(t_car *car);
int			wheels_dir(t_car *car);
char			**my_str_to_wordtab(char *str);
int			parse_answer_for_type_1(t_car *car, char *answer);
int			parse_answer_for_type_2(t_car *car, char *answer);
void			set_speed(t_car *car);
void			set_direction(t_car *car);

#endif			/* !IA_H_ */
