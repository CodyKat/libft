static int	is_space(const char *c)
{
	if ((9 <= *c && *c < 13) || *c == ' ')
		return (1);
	return (0);
}

int	atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (is_space(str))
	{
		str++;
	}
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		str++;
		sign *= -1;
	}
	while (ft_isdigit(str))
	{
		result *= 10;
		result += (*str - '0');
	}
	return (result);
}
