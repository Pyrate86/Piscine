#include <unistd.h>

int match(char *s1, char *s2);
void ft_putchar(char c);

int main(int argc, char **argv)
{
	char *s1;
	s1 = "Ph'nglui mglw'nafh Cthulhu R'lyeh wgah'nagl fhtagn";
	char *s2;
	s2 = "R'lyeh";

	if (argc > 1)
	{
		s1 = argv[1];
		s2 = argv[2];
	}

	int res = match(s1, s2);
	ft_putchar(res + 48);
	ft_putchar('\n');

	return 0;
}
