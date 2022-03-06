void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		stop_point;
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	if (dest == 0 || src == 0)
		return (0);
	stop_point = c;
	p_dest = dest;
	p_src = src;
	while (n-- > 0)
	{
		if (*p_src == stop_point)
			return (p_src + 1);
		*p_dest++ = *p_src++;
	}
	return (0);
}
