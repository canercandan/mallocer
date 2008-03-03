void	show_alloc_mem();

int main()
{
  char	*p1;
  char	*p2;

  p1 = malloc(4);
  p2 = realloc(p1, 50);
  show_alloc_mem();
}
