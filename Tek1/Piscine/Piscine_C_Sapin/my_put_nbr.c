/*
** my_put_nbr.c for  in /home/chapel_k/rendu/Piscine_C_J03
** 
** Made by kevin chapel
** Login   <chapel_k@epitech.net>
** 
** Started on  Thu Oct  1 18:11:35 2015 kevin chapel
** Last update Thu Oct  1 23:32:15 2015 kevin chapel
*/

int	my_put_nbr(int nb)
{
  int	nb2;

  if (nb == -2147483648)
    {
      my_putstr("-2147483648");
    }
  else
    {
      if (nb < 0)
	{
	  my_putchar(45);
	  nb = nb * -1;
	}
      if  (nb <= 9 && nb >= 0)
	{
	  my_putchar(nb + '0');
	}
      else
	{
	  nb2 = nb % 10;
	  nb = nb / 10;
	  my_put_nbr(nb);
	  my_putchar(nb2 + '0');
	}
    }
}

int	my_putstr(char *str)
{
  int a;

  a = 0;
  while (str[a] != '\0')
    {
      my_putchar(str[a]);
      a = a + 1;
    }
}
