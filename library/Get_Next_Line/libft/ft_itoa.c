/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 10:30:40 by kykim             #+#    #+#             */
/*   Updated: 2018/05/05 14:18:54 by kykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*num;
	int		len;
	int		neg;

	neg = 1;
	if (n < 0)
		neg = -1;
	len = ft_getdigit(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (num)
	{
		num[len] = '\0';
		if (n == 0)
			num[len - 1] = '0';
		while (n != 0)
		{
			num[len - 1] = ((n % 10) * neg) + '0';
			n /= 10;
			len--;
		}
		if (neg == -1)
			num[0] = '-';
	}
	return (num);
}
