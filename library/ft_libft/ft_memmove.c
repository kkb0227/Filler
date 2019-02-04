/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 07:46:06 by kykim             #+#    #+#             */
/*   Updated: 2018/04/25 18:44:43 by kykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ds;
	unsigned char	*sr;
	size_t			i;

	i = 0;
	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	if (src >= dst)
	{
		while (i < len)
		{
			ds[i] = sr[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			ds[len - 1] = sr[len - 1];
			len--;
		}
	}
	return (dst);
}
