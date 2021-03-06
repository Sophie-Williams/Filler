/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaidans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 14:37:21 by vkaidans          #+#    #+#             */
/*   Updated: 2018/03/29 11:26:28 by vkaidans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_num(char *str, int n)
{
	if (n / 10)
		str = ft_num(str, n / 10);
	else if (n < 0)
		*str++ = '-';
	*str++ = ABS(n % 10) + '0';
	return (str);
}

char		*ft_itoa(int n)
{
	char *str;

	if ((str = ft_strnew(ft_intlen(n))))
		ft_num(str, n);
	return (str);
}
