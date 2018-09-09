
#include "ft_header.h"

void	ft_print_str(int i, int j, int a, int b)
{
	if (j == b)
	{
		if (i == a)
			ft_putchar('o');
		else if (i == 1)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else if (j == 1)
	{
		if (i == a)
			ft_putchar('o');
		else if (i == 1)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else if (i == a || i == 1)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

int		is_rush(char *tmp, int x, int y)
{
	int i;
	int j;

	j = x;
	while (tmp[i] != '\0')
	{
		while (j > 0)
		{
			i = y;
			while (i > 0)
			{
				ft_print_str(i, j, a, b);
				i--;
			}
			ft_putchar('\n');
			j--;
		}
	}
}
