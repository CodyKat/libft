char	*strchr(const char *s, int c)
{
	const char	to_find;

	to_find = (const char)c;
	while (*s != 0)
	{
		if (*s == to_find)
			break ;
		s++;
	}
	return (s);
}
