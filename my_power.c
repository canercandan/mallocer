/*
** my_power.c for my_malloc in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Wed Feb 13 12:51:10 2008 julian kirtz
** Last update Sat Feb 16 15:14:00 2008 julian kirtz
*/

#include "my_malloc.h"

unsigned int	my_power(int nb, int power)
{
  unsigned int	res;

  if (power < 0)
    res = 0;
  else
    {
      res = 1;
      if (power > 0)
        res = my_power(nb, power - 1) * nb;
    }
  return (res);
}
