/*
** realloc.c for in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Wed Feb 13 13:55:57 2008 julian kirtz
** Last update Mon Mar  3 17:06:13 2008 julian kirtz
*/

#include "my_malloc.h"
#ifndef HAVE_NOT_UNISTD_H
# include <unistd.h>
#endif

void		*realloc(void *ptr, unsigned int taille)
{
  char		*addr;
  unsigned int	data_blk_size;
  unsigned int	i;
  char		*cpy;

  //my_putstr("Realloc\n");
  if (!taille)
    free(ptr);
  else
    {
      addr = malloc(taille);
      if (ptr)
	{
	  data_blk_size = get_blk_size(ptr) - sizeof(t_blk);
	  //my_putnbr(data_blk_size);
	  //my_putchar('\n');
	  i = 0;
	  cpy = ptr;
	  while (i <= data_blk_size && i <= taille)
	    {
	      *(addr + i) = *(cpy + i);
	      i++;
	      //*((char)(addr + i)) = *((char)(ptr + i++));
	    }
	  free(ptr);
	}
      //my_putstr("_+_+_+_+_+_+_+_+_+_+_+_+_+_+\n");
      return (addr);
    }
  //my_putstr("_+_+_+_+_+_+_+_+_+_+_+_+_+_+\n");
  return (0);
}
