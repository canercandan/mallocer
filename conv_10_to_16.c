/*
** conv_10_to_16.c for my_malloc in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Wed Feb 13 13:46:25 2008 julian kirtz
** Last update Sat Feb 16 14:12:57 2008 julian kirtz
*/

#include "my_malloc.h"

void	conv_10_to_16(unsigned int nbr, char *val)
{
  int	i;

  i = 0;
  while (nbr >= 16)
    {
      val[i++] = HEXA[nbr % 16];
      nbr = nbr / 16;
    }
  val[i++] = HEXA[nbr % 16];
  val[i] = '\0';
  my_revstr(val);
}
