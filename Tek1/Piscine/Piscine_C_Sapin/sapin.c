/*
** sapin.c for  in /home/chapel_k/rendu/Piscine_C_Sapin
** 
** Made by kevin chapel
** Login   <chapel_k@epitech.net>
** 
** Started on  Sat Oct  3 10:47:11 2015 kevin chapel
** Last update Thu Oct  8 11:03:10 2015 kevin chapel
*/

int	my_putchar(char c)
{
  write (1, &c, 1);
}

int	ligne(int taille)
{
  int	cnt;
  int	y;
  int	bloc;
  
  cnt = 0;
  y = 0;
  bloc = 1;
  while (cnt != taille)
    {
      y = y + bloc + 3;
      cnt = cnt + 1;
      bloc = bloc + 1;
    }
}

int	espace(int taille)
{
  int	incr;
  int	space;
  int	i;
  
  incr = 3;
  space = 3;
  i	= 1;
  while (i != taille)
    {
      if (i % 2 == 0)
	{
	  incr = incr + 1;
	}
      i = i + 2;
      space = space + incr;
    }
}

void	sapin(int taille)
{
  int	bloc;
  int	j;
  int	star;
  int	k;
  int	lignebloc;
  int	incrlignebloc;
  int	incr;
  int	space;
  int	h;
  
  bloc = 0;
  star = 1;
  lignebloc = 4;
  incrlignebloc = 5;
  incr	= 1;
  space = espace(taille);
  k = 0;
  h = 0;
  while (k != ligne(taille))
    {
      while (k != lignebloc)
	{
	  j = 0;
	  while (j <= space)
	    {
	      my_putchar(' ');
	      j = j + 1;
	    }
	  while (h <= star)
	    {
	      my_putchar('A');
	      my_putchar('*');
	      h = h + 1;
	    }
	  star = star + 2;
	  k = k + 1;
	}
      lignebloc = lignebloc + incrlignebloc;
      bloc = bloc + 1;
      if ((bloc % 2) == 0)
	{
	  incr = incr + 1;
	}
      space = space + incr;
      star = star - incr;
    }
}

int   main(int taille)
{
  sapin(7);
}
