size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	while (size-- > 0)
	{
		if (*src == 0)
			break ;
		*dst++ = *src++;
	}
	*dst = '\0';
	return (src_len);
}
