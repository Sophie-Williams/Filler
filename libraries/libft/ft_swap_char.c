/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaidans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:28:51 by vkaidans          #+#    #+#             */
/*   Updated: 2018/03/29 14:08:10 by vkaidans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_char(char *c1, char *c2)
{
	char x;

	x = *c1;
	*c1 = *c2;
	*c2 = x;
}