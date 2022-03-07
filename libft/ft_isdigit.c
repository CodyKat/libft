int	ft_isdigit(int c)
{
	unsigned char	test_chr;

	test_chr = c;
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}
