void	ft_putchar(char c);
void	ft_putstr(char *str);
int ft_strcmp(char *s1, char *s2);
int	ft_strlen(char *str);
void	ft_swap(char *a, char *b);

int main()
{
	char u[] = "un";
	char d[] = "deux";
	ft_putchar('l');
	ft_putstr("test\n");
	ft_strcmp(u, d);
	ft_strlen(u);
	ft_swap(u, d);
	return 0;
}
