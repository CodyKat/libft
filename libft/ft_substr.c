#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		s_len;
	char	*result;

	s_len = ft_strlen(s);
	if (s_len <= start)
		return (0);
	else
	{
		if (start + len > s_len)
		{
			result = (char *)malloc(sizeof(char) * (len + 1));
			ft_strlcpy(result, s + start, len + 1);
		}
		else
		{
			result = (char *)malloc(sizeof(char) * (s_len - start));
			ft_strcpy(result, s + start);
		}
	}
	return (result);
}
