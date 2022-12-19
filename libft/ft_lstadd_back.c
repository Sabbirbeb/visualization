/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <lcombo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:11:43 by lcombo            #+#    #+#             */
/*   Updated: 2022/10/31 21:27:23 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*h;

	h = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (h->next != 0)
	{
		h = h->next;
	}
	h->next = new;
}
