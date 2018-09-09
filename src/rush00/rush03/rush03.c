#include "ft_header.h"

void	ft_print_str(int i, int j, int a, int b)
{
	if (j == b)
	{
		if (i == a)
			ft_putchar('A');
		else if (i == 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (j == 1)
	{
		if (i == a)
			ft_putchar('A');
		else if (i == 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (i == a || i == 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int a, int b)
{
	int i;
	int j;
	
	if (a > 0 && b > 0)
	{
		j = b;
		while (j > 0)
		{
			i = a;
			while (i > 0)
			{
				ft_print_str(i, j, a, b);
				i--;
			}
			ft_putchar('\n');
			j--;
		}
	}
	else
		write(1, "Wrong arguments\n", 17);
}
