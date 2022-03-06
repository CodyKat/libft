char	*strrchr(const char *s, int c)
{
	int			s_len;
	const char	to_find;

	s_len = ft_strlen(s);
	to_find = c;
	while (s_len > 0)
	{
		if (*(s + s_len - 1) == to_find)
			return (s + s_len - 1);
		s_len--;
	}
	return (0);
}
