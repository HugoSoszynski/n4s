/*
** my_strlen.c for CPE_2015_n4s in /home/soszyn_h/rendu/CPE/CPE_2015_n4s/sources/my_strlen.c
**
** Made by Hugo SOSZYNSKI
** Login   <hugo.soszynski@epitech.eu>
**
** Started on  Mon May 02 08:13:31 2016 Hugo SOSZYNSKI
** Last update Mon May 02 08:13:31 2016 Hugo SOSZYNSKI
*/

#include        <unistd.h>
#include        <limits.h>

int             my_strlen(const char *str)
{
  int           cpt;

  cpt = 0;
  while (str[cpt] != '\0')
  {
    if (cpt == INT_MAX)
    {
      write(2, "Error: my_strlen: string is to long (int overflow)\n", 51);
      return (-1);
    }
    cpt++;
  }
  return (cpt);
}
