/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:47:42 by drobles           #+#    #+#             */
/*   Updated: 2022/09/08 16:51:08 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char		*c;
	size_t				i;
	int					j;

	j = '\0';
	c = s;
	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
		c[i] = j;
		i++;
		}
	}
}
/*int main(void)
{
	char s1[] = "Abcde";
	printf("%s", ft_bzero(s1, 0));
	bzero(s1, 6);
	return (0);
}*/
