void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
	{
		*s++ = '\0';
	}
}
