void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		to_find;

	ptr = s;
	to_find = c;
	while (n-- > 0)
	{
		if (*ptr == to_find)
			return (s);
		ptr++;
	}
	return (0);
}
