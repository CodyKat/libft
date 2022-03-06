void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	if (dset == 0 || src == 0)
		return (0);
	p_dest = dest;
	p_src = src;
	while (n-- > 0)
	{
		*p_dest = *p_src;
	}
	return (dest);
}
