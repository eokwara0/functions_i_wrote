#include <unistd.h>


int ft_strlen(char *str)
{
    int x;

    x =  0;

    while(str[x])
    {
        ++x;
    }
    return (x);
}
int main(int ac , char *av[])
{
	int len; 
	int x = 0;
		if (ac == 2)
		{
			len = ft_strlen(av[1]);
			len = len - 1;
			
		while(av[1][x])
		{
			write(1, &av[1][len], 1);
			--len;
			++x;
		}
		}
		write(1, "\n", 1);
}
