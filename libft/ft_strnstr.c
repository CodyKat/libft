static int	check_is_there(const char *s1, const char *s2, size_t n)
{
	while (n-- > 0)
	{
		if (*s1++ != *s2++)
			return (0);
	}
	return (1);
}

char	*strnstr(const char *s1, const char *s2, size_t n)
{
	int	s1_len;
	int	s2_len;
	int	count;
	int	count_limit;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	count = 0;
	count_limit = s1_len - s2_len + 1;
	while (count < count_limit)
	{
		if (check_is_there(s1 + count, s2, n))
			return (s1 + count);
		count++;
	}
	return (0);
}
