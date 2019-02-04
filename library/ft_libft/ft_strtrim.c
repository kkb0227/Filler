/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 12:00:59 by kykim             #+#    #+#             */
/*   Updated: 2018/05/01 09:36:56 by kykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		len;

	if (!s)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	len = ft_strlen(s);
	while ((len != 0) && (s[len - 1] == ' ' || s[len - 1] == '\n' ||
				s[len - 1] == '\t'))
		len--;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str)
	{
		ft_strncpy(str, s, len);
		str[len] = '\0';
		return (str);
	}
	return (NULL);
}
