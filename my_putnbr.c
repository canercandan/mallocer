/*
** my_putnbr.c for my_malloc in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Wed Feb 13 12:49:43 2008 julian kirtz
** Last update Wed Feb 13 12:49:53 2008 julian kirtz
*/

#include "my_malloc.h"

void	my_putnbr(int nb)
{
  int	div;
  int	res;

  if (nb < 0)
    {
      my_putchar(45);
      nb = nb * -1;
    }
  div = 10;
  while (nb >= div)
    div = div * 10;
  div = div / 10;
  while (div != 1)
    {
      res = nb / div;
      my_putchar(res + 48);
      nb = nb - res * div;
      div = div / 10;
    }
  my_putchar(nb + 48);
}
