/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 13:10:35 by kykim             #+#    #+#             */
/*   Updated: 2018/04/25 18:54:36 by kykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	while (dst[i] && (i < dstsize))
		i++;
	if (i == dstsize)
		return (dstsize + ft_strlen(src));
	ft_strncat(dst + i, src, dstsize - i - 1);
	return (i + ft_strlen(src));
}
