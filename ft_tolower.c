/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksymi <mmaksymi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:24:19 by mmaksymi          #+#    #+#             */
/*   Updated: 2024/11/17 11:15:35 by mmaksymi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_tolower(char *s)
{
	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z')
			*s += 32;
		s++;
	}
}
