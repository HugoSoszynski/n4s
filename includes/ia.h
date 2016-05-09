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

# include		"get_next_line.h"
# include		"define.h"
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
int			my_getnbr(char *str);
int			my_strlen(const char *str);
void 			*error_null(const char *msg);
int 			error_int(const char *msg);
void			my_putnbr(int nb);
void			my_putfloat(float nb);

#endif			/* !IA_H_ */
