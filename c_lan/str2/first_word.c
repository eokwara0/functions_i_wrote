#include <unistd.h>



int  main(int argc, char **argv)
{
	int x;

	x = 0;

	if (argc != 1)
	{
			while(argv[1][x])
			{
				if (argc == 3)
				{
					break;
				}
			if(argv[1][x] == ' ')
			{
				argv[1][x] = argv[1][x + 1];
			}
			else if (argv[1][x])
			{
				write(1, &argv[1][x], 1);
				if (argv[1][x + 1] == ' ')
				{
					break;
				}
				
			}
			++x;
			}
	}
		write(1, "\n", 1);
}
