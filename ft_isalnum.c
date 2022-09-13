/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:59:38 by drobles           #+#    #+#             */
/*   Updated: 2022/09/08 16:51:08 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isalnum(int str)
{
	if ((str > 96 && str < 123) || (str > 64 && str < 91)
		|| (str > 47 && str < 58))
		return (1);
	else
		return (0);
}
