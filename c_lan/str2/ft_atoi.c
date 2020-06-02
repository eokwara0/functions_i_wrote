int ft_atoi(const char *str)
{
	int x;
	int res;
	int neg;

	x = 0;
	res = 0;
	neg = 1;


	while (str[x] == ' ')
	{
		++x;
	}
	if (str[x] == '-')
	{
		neg = -1;
	}
	if(str[x] == '-' || str[x] == '+')
	{
		++x;
	}
	while(str[x]>= '0' && str[x] <= '9')
	{
		res = res*10 + str[x] - '0';
		++x;
	}

	return (res * neg);
}
