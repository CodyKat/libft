#include <stdlib.h>

char	*strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!s2)
		return (0);
	strlcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}
