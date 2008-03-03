/*
** my_putstr.c for my_malloc in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Wed Feb 13 12:50:24 2008 julian kirtz
** Last update Wed Feb 13 13:47:31 2008 julian kirtz
*/

#include "my_malloc.h"
#include <unistd.h>

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}
