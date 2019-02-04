/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_bits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 16:38:18 by kykim             #+#    #+#             */
/*   Updated: 2018/05/05 16:45:55 by kykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	ft_reverse_bits(unsigned char c)
{
	unsigned char	r;
	unsigned int	len;

	r = 0;
	len = 8;
	while (len--)
	{
		r = (r << 1) | (c & 1);
		c >>= 1;
	}
	return (r);
}
