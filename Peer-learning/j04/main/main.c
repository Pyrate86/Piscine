#include <stdio.h>

int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
//int	ft_iterative_power(int nb, int power);
//int ft_recursive_power(int nb, int power);
//int ft_fibonacci(int index);
//int ft_sqrt(int nb);

int main ()
{


	int a = 0, r = 0;

	r = ft_iterative_factorial(a);
	printf("%d! = %d\n", a, r);
	r = ft_recursive_factorial(a);
	printf("%d! = %d\n", a, r);
	
	
	return 0;
}
