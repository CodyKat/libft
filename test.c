#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int	errno;

void set_errno(int value)
{
	errno = value;
}

int main()
{
	set_errno(34);
	perror("my error");
	return (0);
}