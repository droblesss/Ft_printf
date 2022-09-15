/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:33:37 by drobles           #+#    #+#             */
/*   Updated: 2022/09/15 10:58:25 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n)
{
	static int	i;

	i = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = n * -1;
			i++;
		}
		if (n > 9)
		{
			ft_putnbr(n / 10);
			n = n % 10;
		}
		i++;
		ft_putchar((n % 10) + '0');
	}
	return (i);
}
/*int main()
{
	ft_putnbr(-564651);
	return (0);
}*/