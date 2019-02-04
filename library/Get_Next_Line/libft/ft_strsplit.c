/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 13:45:00 by kykim             #+#    #+#             */
/*   Updated: 2018/05/05 14:21:16 by kykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		wc;
	int		i;

	i = 0;
	if (!s)
		return (0);
	wc = ft_countword(s, c);
	arr = (char **)malloc(sizeof(char *) * (wc + 1));
	if (arr)
	{
		while (i < wc)
		{
			while (*s == c)
				s++;
			if (*s != '\0')
				arr[i] = ft_mallocword(s, c);
			while (*s != '\0' && *s != c)
				s++;
			i++;
		}
		arr[i] = 0;
	}
	return (arr);
}
