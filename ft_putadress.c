
#include <stdio.h>
#include "libftprintf.h"

int	ft_putadress(void *numero)
{
	int	i;
	size_t			aux;

	i = 0;
	aux = (size_t)numero;
	i = write(1, "0x10", 4);
	i = i + ft_puthexa(aux);
	return (i);
}
/*int main()
{
	void *hola;

	hola = "holaquetal";
	ft_putadress(hola);
	printf("\n");
	printf("%p",hola);
	printf("\n");
	printf("%x",(unsigned int) hola);

	return 0;
}*/