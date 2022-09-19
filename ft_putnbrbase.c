/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:31:22 by drobles           #+#    #+#             */
/*   Updated: 2022/09/19 12:36:29 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int	ft_putnbrbase(unsigned int number, char *base)
{
	static int	i;
	size_t		numero;

	numero = (size_t)number;
	i = 0;
	if (numero >= ft_strlen(base))
	{
		ft_putnbrbase(numero / ft_strlen(base), base);
		numero = numero % ft_strlen(base);
	}
	i++;
	ft_putchar(base[numero]);
	return (i);
}
