#include <unistd.h>

char *ft_strcpy(char *s1, char *s2)
{
	int x;

	x = 0;
	while(s2[x])
	{
		s1[x] = s2[x];
		++x;
	}
	s1[x] = '\0';
	return s1;
}
