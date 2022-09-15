/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:33:37 by drobles           #+#    #+#             */
/*   Updated: 2022/09/15 14:14:22 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int number)
{
	static int	i;
	long		n;

	n = number;

	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}
	i++;
	ft_putchar(n + '0');
	if (number < 0)
		i++;
	return (i);
}
/*int main()
{
	ft_putnbr(-564651);
	return (0);
}*/