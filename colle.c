#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void colle(void)
{
	int i;
	char *buffer[8000];

	while (read(STDIN_FILENO, buffer, 8000))
	{
		if (buffer[1])
		{
			ft_putstr(buffer[5]);
			ft_putchar('\n');
		}
		write(1, "rush-01] [4] [4]\n", 18);
	}
	free(STDIN_FILENO);
}

int		main()
{
	colle();
	return (0);
}
