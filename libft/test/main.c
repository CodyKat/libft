#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main()
{
	printf("========isalpha========\n");
	printf("origin : my\n");
	long long data[5];
	{
		data[0] = 'a';
		data[1] = 'Z' + 1;
		data[2] = (long long)UCHAR_MAX + 1 + 'a';
		data[3] = (long long)INT_MAX - (long long)INT_MIN + 1 + 'a';
		data[4] = (long long)INT_MAX - (long long)INT_MIN + 1 + 'a' - 1;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d %d\n", isalpha(data[i]), ft_isalpha(data[i]));
	}



	printf("========isdigit========\n");
	printf("origin : my\n");
	{
		data[0] = '0';
		data[1] = '9' + 1;
		data[2] = (long long)UCHAR_MAX + 1 + '0';
		data[3] = (long long)INT_MAX - (long long)INT_MIN + 1 + '0';
		data[4] = (long long)INT_MAX - (long long)INT_MIN + 1 + '9' - 1;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d %d\n", isdigit(data[i]), ft_isdigit(data[i]));
	}



	printf("========isalnum========\n");	
	printf("origin : my\n");
	{
		data[0] = 'A';
		data[1] = '9' + 1;
	}
	for (int i = 0; i < 2; i++)
	{
		printf("%d %d\n", isalnum(data[i]), ft_isalnum(data[i]));
	}




	printf("========isascii========\n");	
	printf("origin : my\n");
	{
		data[0] = 15;
		data[1] = 255;
		data[2] = 122;
	}
	for (int i = 0; i < 2; i++)
	{
		printf("%d %d\n", isascii(data[i]), ft_isascii(data[i]));
	}
	printf("========isprint========\n");
	
	printf("origin : my\n");
	{
		data[0] = 31;
		data[1] = 45;
		data[2] = 250;
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d %d\n", isprint(data[i]), ft_isprint(data[i]));
	}



	printf("========strlen========\n");
	char *s1, *s2, *s3;
	printf("origin : my\n");
	{
		s1 = strdup("abcde");
		s2 = strdup("");
		s3 = NULL;
	}
	printf("%ld %ld\n", strlen(s1), ft_strlen(s1));
	printf("%ld %ld\n", strlen(s2), ft_strlen(s2));
//	printf("%ld %ld\n", strlen(s3), ft_strlen(s3));



	printf("========memset========\n");
	printf("before string\n");
	printf("%s\n", s1);
	printf("after string\n");
	printf("origin : my\n");
	{
		ft_memset(s1, 'a', 3);
		printf("%s : ", s1);
		free(s1);
		s1 = strdup("abcde");
		memset(s1, 'a', 3);
		printf("%s\n", s1);
		free(s1);
		s1 = strdup("abcde");
	}
	printf("========bzero========\n");
	{
		printf("before string\n");
		printf("%s\n", s1);
		printf("after string");
		printf("    ft_bzero(s1, 3)\n");
		ft_bzero(s1, 3);
		printf("answer : \n\n\n\nde\ne\n");
		printf("my result : \n");
		for (int i = 0; i < 5; i++)
		{
			printf("%s\n", s1 + i);
		}
	}
	printf("========memcpy========");
	
	printf("========memmove========");
	
	printf("========strlcpy========");
	
	printf("========strlcat========");

	printf("========strncmp========");
	return 0;
}
