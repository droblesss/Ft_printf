
#include <stdio.h>
#include "libftprintf.h"

unsigned int	ft_putadress(void *numero)
{
	static int	i;
	unsigned long long			aux;

	i = 0;
	aux = (unsigned long long)numero;
	i = write(1, "0x", 2);
	i = i + ft_putnbrbase(aux, "0123456789abcdef");
	return (i);
}
// int main()
// {
// 	void *hola;

// 	hola = 9223372036854775807L;
// 	ft_putadress("%p", hola);
// 	printf("\n");
// 	printf("%p",hola);
// 	printf("\n");
// 	printf("%x",(unsigned int) hola);

// 	return 0;
// }