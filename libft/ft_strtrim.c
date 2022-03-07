#include <stdlib.h>

static int	is_in_set(const char chr, const char *set)
{
	while (set++ != 0)
	{
		if (chr == *set)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*start;
	char	*end;
	char	*result;
	int		result_len;

	if (s1 == NULL || s1 == NULL)
		return (0);
	start = s1;
	end = s1 + ft_strlen(s1) - 1;
	while (is_in_set(*start, set))
	{
		start++;
	}
	while (is_in_set(*end, set))
	{
		end--;
	}
	result_len = end - start + 1;
	if (result_len <= 0)
		return (0);
	result = (char *)malloc(sizeof(char) * (result_len + 1));
	ft_strlcay(result, start, result_len + 1);
	return (result);
}
