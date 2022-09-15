/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:17:54 by drobles           #+#    #+#             */
/*   Updated: 2022/09/15 12:22:04 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_isalpha(int src);
void	ft_bzero(void	*s, size_t	n);
int		ft_isascii(int c);
int		ft_isdigit(int src);
int		ft_isalnum(int str);
int		ft_isprint(int c);
int		ft_strlen(const char	*str);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char	*str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char	*s1);
int		ft_putstr(char	*s);
int		ft_putnbr(int n);
int		ft_putnbrbase(int numero, char *base);
void	ft_putendl_fd(char	*s, int fd);
int		ft_putchar(int c);
int		ft_printf(char const *cadena, ...);
char	*ft_itoa(int n);
int		ft_puthexa(int n);
int		ft_putadress(void *numero);

#endif
