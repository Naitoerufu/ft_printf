/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksymi <mmaksymi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 10:21:59 by mmaksymi          #+#    #+#             */
/*   Updated: 2024/11/17 15:52:26 by mmaksymi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>

void			*ft_memset(void *s, int c, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
void			ft_bzero(void *s, size_t n);
size_t			ft_strlen(const char *s);
void			ft_tolower(char *s);
int				ft_putchar(char c);
int				ft_putnbr(int n);
unsigned int	ft_putu(unsigned int num);
int				ft_putstr(char *s);
int				ft_puthex(unsigned int num, int uppercase);
int				ft_putlonghex(unsigned long long num, int lowercase);
int				ft_putptr(void *ptr);
int				ft_printf(const char *s, ...);

#endif