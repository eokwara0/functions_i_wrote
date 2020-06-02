#include <unistd.h>


int main(int argc , char **argv)
{
	int q;
	q = 0;

	if(argc <= 1)
	{
		write(1, "\n", 1);
	}
	else
	{
			while(argv[argc-1][q])
			{
				write(1, &argv[argc-1][q], 1);
				++q;
			}
		write(1, "\n", 1);
	}
}
