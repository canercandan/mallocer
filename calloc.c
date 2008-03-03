/*
** calloc.c for  in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Fri Feb 15 13:55:10 2008 julian kirtz
** Last update Fri Feb 15 16:34:04 2008 julian kirtz
*/

#include "my_malloc.h"

void	*calloc(unsigned int nombre, unsigned int taille)
{
  void	*addr;

  //my_putstr("Calloc\n");
  addr = malloc(nombre * taille);
  mem_set(addr, 0, nombre * taille);
  return (addr);
}
