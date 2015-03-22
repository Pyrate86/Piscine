#include <stdio.h>

//char	*ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
//char *ft_strstr(char *str, char *to_find);
//int ft_strcmp(char *s1, char *s2);
//int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
//	char str[] = "Ph'nglui mglw'nafh Cthulhu R'lyeh wgah'nagl fhtagn";
	char test1[] = "Yolo";
	char test2[] = "Banzaiii";
//	int a = 0, b = 0, c = 0;
	
	ft_strncpy(test2, test1, 2);
	printf("%s\n%s", test1, test2);
	return 0;
}
