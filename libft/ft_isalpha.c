int	ft_isalpha(int c)
{
	unsigned char	test_chr;

	test_chr = c;
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}
