
#include "libftprintf.h"

unsigned int	ft_puthexa(unsigned int n)
{
	char *base;

	base = "0123456789abcdef";
		/*if (n < 0)
		{
			ft_putchar('-');
			n = n * -1;
		}*/
		if (n >= 16)
		{
			ft_puthexa(n / 16);
			n = n % 16;
		}
		n++;
		ft_putchar(base[n]);
	
	return (n);
}

// int main()
// {
	
// 	ft_puthexa(-1065156);
// 	printf("\n");
// 	printf("%x", -1065156);
// 	return (0);

// }