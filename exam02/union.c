#include <unistd.h>

int		check_str(int i, char *str, char c)
{
	int index;

	index = 0;
	while (i > index)
	{
		if (str[index] == c)
			return (0);
		index++;
	}
	return (1);
}

int 	main(int argc, char **argv)
{
	int i;
	int n;


	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}

	i = 0;
	while (argv[1][i])
	{
		if (check_str(i, argv[1], argv[1][i]) == 1)
			write(1, &argv[1][i], 1);
		i++;
	}
	/*n = i;
	i = 0;
	while (argv[2][i])
	{
		if (check_str(i, argv[2], argv[2][i]) == 1)
		{
			if (check_str(n, argv[1], argv[2][i]) == 1)
				write(1, &argv[2][i], 1);
		}
		i++;
	}*/
	write (1, "\n", 1);
	return (0);
}