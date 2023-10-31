#include <stdarg.h>

int	soma(int n, ...)
{
	va_list	numbers;
	int		i;
	int		soma;
	
	i = 1;
	soma = 0;
	va_start(numbers, n);
	while (i <= n)
	{
		soma = soma + va_arg(numbers, int);
		i++;
	}
	va_end(numbers);
	return(soma);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", soma(6, 3, 6, 9, 3, 5, 10));
}