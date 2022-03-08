#include <stdio.h>
#include <limits.h>
#include <ctype.h>
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
	
	printf("origin : my\n");
	{
		data[0] = 'A';
		data[1] = '9' + 1;
	}
	for (int i = 0; i < 2; i++)
	{
	//	printf("%d %d\n", isalpha(data[i]), ft_isalpha(data[i]));
	}
	printf("========memset========");
	
	printf("========bzero========");
	
	printf("========memcpy========");
	
	printf("========memmove========");
	
	printf("========strlcpy========");
	
	printf("========strlcat========");

	printf("========strncmp========");
	return 0;
}
