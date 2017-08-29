
int		ft_atoi(char *str)
{
	int j;
	int result;
	
	j = 1;
	result = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' ||
		*str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '+')
		str++;
	if (*str == '-')
	{
		j = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{	
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * j);
}
