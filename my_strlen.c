/*
** my_strlen.c for my_malloc in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Wed Feb 13 12:44:21 2008 julian kirtz
** Last update Wed Feb 13 12:44:33 2008 julian kirtz
*/

#include "my_malloc.h"

int	my_strlen(char *str)
{
  int	len;

  len = 0;
  while (str[len])
    len++;
  return (len);
}
