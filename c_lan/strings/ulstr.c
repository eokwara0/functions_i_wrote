
#include <unistd.h>

int main(int argc, char *argv[])
{
	int x;

	if (argc != 1)
	{
	x = 0;
		while(argv[1][x] != '\0')
		{
			if(argv[1][x] >= 'a' && argv[1][x] <= 'z')
			{
				argv[1][x] = (argv[1][x] - 32);
			}
			else if(argv[1][x] >= 'A' && argv[1][x] <= 'Z')
			{
				argv[1][x] = (argv[1][x] + 32);
			}
			write(1,  &argv[1][x], 1);
			++x;
	}
		write(1, "\n", 1);
	}
}
