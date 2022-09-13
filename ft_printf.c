
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
    else if (format == 'd')
        dest += ft_putnbr(va_arg(print, int));
    else if (format == 'x')
        dest += ft_putnbrbase(va_arg(print, int), "0123456789ABCDEF");
    else if (format == 'X')
        dest += ft_putnbrbase(va_arg(print, int), "0123456789abcdef");
    else if (format == 'i')
        dest += ft_putnbr(va_arg(print, int));
    else if (format == 'u')
        dest += ft_putnbrbase(va_arg(print, int), "914321932");

    return (dest);

}


int ft_printf(char const *cadena, ...)
{   
    int size;
    int contador;

    contador = 0;
    va_list print;
    va_start (print, cadena); 
    while(*cadena)
    {
        /*if (cadena[contador] == '%')*/
            {   size = size + ft_format(print, cadena[contador +1]);
                contador++;
            }

    }
    va_end (print);
    return (size);
}

int main()
{
    ft_printf("%u", 10^33);
    printf("%u", 10^33);
    return 0;
}
