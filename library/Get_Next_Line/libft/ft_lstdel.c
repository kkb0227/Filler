/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 13:11:04 by kykim             #+#    #+#             */
/*   Updated: 2018/05/04 13:58:35 by kykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;

	if (alst != NULL)
	{
		while (*alst != NULL)
		{
			temp = *alst;
			*alst = (*alst)->next;
			del(temp->content, temp->content_size);
			free(temp);
		}
	}
}
