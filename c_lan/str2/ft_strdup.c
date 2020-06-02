#include <stdlib.h>

char *ft_strdup(char *src)
{
	int x;
	char *arr;


	x = 0;
	arr = malloc(sizeof(src) +  1);
	if(arr != NULL)
	{
	while(src[x])
	{
		arr[x] = src[x];
			++x;
	}
	arr[x] = '\0';
	}
	return (arr);
}
