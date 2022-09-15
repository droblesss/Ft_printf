
#include <stdarg.h>
#include "libftprintf.h"

int	ft_format(va_list print, char format)
{
	int	dest;

	dest = 0;
	if (format == '%')
		dest += ft_putchar('%');
    else if (format == 'c')
        dest += ft_putchar(va_arg(print, int));
    else if (format == 's')
        dest += ft_putstr(va_arg(print, char *));
    else if (format == 'd'|| format == 'i')
        dest += ft_putnbr(va_arg(print, int));
    else if (format == 'X')
        dest += ft_putnbrbase(va_arg(print, int), "0123456789ABCDEF");
    else if (format == 'x')
        dest += ft_putnbrbase(va_arg(print, int), "0123456789abcdef");
    else if (format == 'u')
        dest += ft_putnbrbase(va_arg(print, int), "0123456789");
    else if (format == 'p')
            dest += ft_putadress(va_arg(print, void *));
    return (dest);

}


int ft_printf(char const *cadena, ...)
{   
    int size;
    int contador;

    size = 0;
    contador = 0;
    va_list print;
    va_start (print, cadena); 
    while(cadena[contador])
    {
        if (cadena[contador] == '%')
        {   size = size + ft_format(print, cadena[contador +1]);
            contador++;
        }
        else
        size = size + ft_putchar(cadena[contador]);
        contador++;
    }
    va_end (print);
    return (size);
}
// int main()
// {
//     printf("%x", 2147483647);
//     return 0;
// }