#include	<stdio.h>
#include	<stdlib.h>

char	*ft_rot42(char *str);

int main ()
{
	char *src = "TEST subtile, avec espaces !";
	char *res;

	res = ft_rot42(src);
	printf("SRC = %s\nRES = %s\n", src, res);
	return 0;
}
