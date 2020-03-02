#include <unistd.h>


int main(int argc, char **argv)
{
	int x;
	x = 0;

	if (argc != 1)
	{
		while(argv[1][x])
		{
		if ((argv[1][x] >= 'a' && argv[1][x] <= 'm') || (argv[1][x] >= 'A' && argv[1][x] <= 'M'))
		{
			argv[1][x] = (argv[1][x] + 13);
		}
		else if ((argv[1][x] <='z' && argv[1][x] >= 'n') || (argv[1][x] <='Z' && argv[1][x] >= 'N'))
		{
			argv[1][x] = (argv[1][x] - 13);
		}
		write(1, &argv[1][x], 1);
		++x;
		}

	}
		write(1, "\n", 1);
}
