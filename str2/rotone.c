#include <unistd.h>


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
				write(1, "a", 1);
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
