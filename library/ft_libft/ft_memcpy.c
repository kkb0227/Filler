/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 11:55:32 by kykim             #+#    #+#             */
/*   Updated: 2018/04/25 18:36:54 by kykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*de;
	unsigned char	*sr;
	size_t			i;

	i = 0;
	de = (unsigned char *)dst;
	sr = (unsigned char *)src;
	while (i < n)
	{
		de[i] = sr[i];
		i++;
	}
	return (dst);
}
