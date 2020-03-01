#include <unistd.h>



int main(int argc, char **argv)
{
	int x;

	x = 0;

	if (argc <= 1)
	{
		write(1, "\n", 1);
	}
	else
	{
		while(argv[1][x])
		{
			if (argv[1][x] == 'z')
			{
				write(1, "z", 1);
			}
			++x;
		}
		write(1, "\n", 1);
	}
}
