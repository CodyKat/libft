size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len + 1 < size)
	{
		if (src_len >= size)
			ft_memncpy(dst + dst_len, src, size - dst_len - 1);
		else
			ft_memncpy(dst + dst_len, src, src_len);
		*(dst + size - 1) = '\0';
	}
	return (dst_len + src_len);
}
