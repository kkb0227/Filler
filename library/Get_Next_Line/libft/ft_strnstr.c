/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 14:16:05 by kykim             #+#    #+#             */
/*   Updated: 2018/04/25 18:41:06 by kykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	char	*nee;
	size_t	i;
	size_t	j;

	i = 0;
	hay = (char *)haystack;
	nee = (char *)needle;
	if (*nee == '\0')
		return (hay);
	while ((hay[i] != '\0') && (len > i))
	{
		j = 0;
		while ((hay[i + j] == nee[j]) && ((i + j) < len))
		{
			if (nee[j + 1] == '\0')
				return (hay + i);
			j++;
		}
		i++;
	}
	return (0);
}
