/*
** my_str_to_wordtab.c for CPE_2015_n4s in /home/loens_g/Rendu/CPE_2015_n4s/sources/my_str_to_wordtab.c
**
** Made by Grégoire LOENS
** Login   <gregoire.loens@epitech.eu>
**
** Started on  Tue May 24 17:20:59 2016 Grégoire LOENS
** Last update Tue May 24 17:20:59 2016 Grégoire LOENS
*/

#include	<stdio.h>

int		count_token(char *str)
{
  int		counter;
  int		token_counter;

  counter = 0;
  token_counter = 0;
  while (str[counter])
  {
    if (str[counter] == ':')
      token_counter++;
    counter++;
  }
  return (token_counter);
}

char		**my_str_to_wordtab(char *str)
{
  char		**wordtab;
  int		counter;
  int		pos;
  int		case_counter;

  counter = count_token(str);
  pos = 0;
  case_counter = 0;
  if ((wordtab = malloc(sizeof(char *) * (counter + 1))) == NULL)
    return (NULL);
  wordtab[counter] = NULL;
  counter = 0;
  while (str[counter])
  {
    if (str[counter] == ':')
    {
      str[counter] = 0;
      wordtab[case_counter] = &str[pos];
      pos = counter + 1;
      case_counter++;
    }
    counter++;
  }
  wordtab[case_counter] = &str[pos];
  return (wordtab);
}