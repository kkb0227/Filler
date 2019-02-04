/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 12:53:58 by kykim             #+#    #+#             */
/*   Updated: 2018/04/25 18:56:11 by kykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*hay;
	char	*nee;

	hay = (char *)haystack;
	nee = (char *)needle;
	i = 0;
	if (*needle == '\0')
		return (hay);
	while (hay[i] != '\0')
	{
		j = 0;
		while (hay[i + j] == nee[j])
		{
			if (nee[j + 1] == '\0')
				return (hay + i);
			j++;
		}
		i++;
	}
	return (0);
}
