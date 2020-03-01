


#include <unistd.h>

int count_(char c)
{
	int count ;
	
		if (c >= 'a' || c <= 'z')
		{
			count = (c -'a' + 1);
		}
		else if (c >= 'A' || c <= 'Z')
		{
			count = (c - 'A' + 1);
		}
		return count;
}

int main(int argc , char **argv)
{
	int x;
	int c;
	x = 0;

	if (argc <= 1)
	{
		write(1, "\n", 1);
	}
	else 
	{
		while(argv[1][x])
		{
			c = count_(argv[1][x]);
			while (c)
			{
				write(1, &argv[1][x], 1);
				--c;
			}
		++x;
		}
		write(1, "\n", 1);
	}	
}
