
#include <stdio.h>
#include "libftprintf.h"

int	ft_putnbrbase(int numero, char *base)
{
	static int	i;

	i = 0;

	if (numero > ft_strlen(base))
	{
		ft_putnbrbase(numero/ft_strlen(base), base);
		numero = numero % ft_strlen(base);
	}
	i++;
	ft_putchar(base[numero]);
	return (i);
}