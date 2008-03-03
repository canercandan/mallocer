/*
** my_revstr.c for my_malloc in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Wed Feb 13 13:44:38 2008 julian kirtz
** Last update Wed Feb 13 13:45:10 2008 julian kirtz
*/

#include "my_malloc.h"

char	*my_revstr(char *str)
{
  char	swpchar;
  int	i;
  int	len;

  i = 0;
  len = my_strlen(str);
  if (len > 0)
    while (i < len / 2)
      {
        swpchar = str[i];
        str[i] = str[len - 1 - i];
        str[len - i - 1] = swpchar;
        i++;
      }
  return (str);
}
