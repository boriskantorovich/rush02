#include <stdio.h>
#include <unistd.h>

void	rush(int a, int b);

int		main(int argc, char **argv)
{
	int i;
	int j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		rush(i, j);
	}
	else
		write(1, "No arguments\n", 13);
    return (0);
}
