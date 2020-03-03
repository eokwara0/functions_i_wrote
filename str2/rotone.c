#include <unistd.h>

void	check_char(char c);

int main(int argc, char **argv)
{
	int x;

	x = 0;

	if (argc != 1)
	{
		while(argv[1][x])
		{
			if (argv[1][x] == 'z')
			{
				argv[1][x] = argv[1][x] -argv[1][x] + 'a';
			}
			else if (argv[1][x] == 'Z')
			{
				argv[1][x] = argv[1][x] -argv[1][x] + 'A';

			}
			else if ((argv[1][x] >= 'a' && argv[1][x] <= 'z') 
					|| (argv[1][x] >= 'a' && argv[1][x] <= 'z'))

			{
				argv[1][x] = argv[1][x] + 1;
			}
			write(1, &argv[1][x], 1);
			++x;
		}
	}
	write(1, "\n", 1);
}

void	check_char(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		if (c == 'z')
			c = 'a';
		c += 1;
	}
	if (c >= 'A' && c <= 'Z')
	{
		if (c == 'Z')
			c = 'A';
		c += 1;
	}
}

