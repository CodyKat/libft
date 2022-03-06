void	*ft_memmove(char *dest, const char *src, size_t n)
{
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	if (p_dest == 0 || p_src == 0)
		return (0);
	if (dest > src)
	{
		p_dest = dest + n - 1;
		p_src = src + n - 1;
		while (n-- > 0)
		{
			*p_dest-- = *p_src--;
		}
	}
	else
	{
		p_dest = dest;
		p_src = src;
		while (n-- > 0)
		{
			*p_dest++ = *p_src++;
		}
	}
	return (dest);
}
