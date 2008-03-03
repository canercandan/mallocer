/*
** my_moulinette.c for  in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Wed Feb 13 13:51:57 2008 julian kirtz
** Last update Wed Feb 13 16:08:21 2008 julian kirtz
*/

#include "my_malloc.h"

int	main()
{
  char	*p1;
  int	*p2;
  int	*p3;
  unsigned long size;
  unsigned char	psize;

  p1 = malloc(sizeof(char) * 2);
  p1 = realloc(p1, sizeof(char) * 42);
  //p2 = malloc(sizeof(int) * 2);
  p1[0] = 'Y';
  p1[1] = 'o';
  p1[2] = 'p';
  p1[3] = 'p';
  p1[4] = 'p';
  p1[5] = 'p';
  p1[6] = 'p';
  p1[7] = 'p';
  p1[8] = '\0';
  show_alloc_mem();
  //printf("Addr de chaine 1 [%x]\n", &(p1[1000]));
  //printf("Addr de chaine 2 [%d]\n", p2);
  printf("Chaine : [%s]\n", p1);
  //size = sizeof(char) * 2 + sizeof(t_blk);
  //printf("Addr de struct [%x]\n", blk_list);
  //printf("Size de power struct [%d]\n", blk_list->psize);
  //printf("Size of blk struct [%d]\n", sizeof(t_blk));
  //printf("Size of malloc : [%d]\n", size);
  //sup_power(&size, &psize);
  //printf("Real size of malloc : [%d]\n", size);
  //p2 = my_malloc(42);
  //p3 = my_malloc(678);
  //my_free(p2);
  //printf("Address : %d\n", p1);
  //printf("Address : %d\n", p2);
  //printf("Address : %d\n", p3);
  return (0);
}
