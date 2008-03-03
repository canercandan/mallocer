/*
** my_putchar.c for my_malloc in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Wed Feb 13 12:49:06 2008 julian kirtz
** Last update Wed Feb 13 13:47:39 2008 julian kirtz
*/

#include "my_malloc.h"
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
