/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <lcombo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:11:52 by lcombo            #+#    #+#             */
/*   Updated: 2022/10/31 21:27:48 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*this;

	if (!(*lst) || !del)
		return ;
	while ((*lst)->next != 0)
	{
		this = (*lst)->next;
		ft_lstdelone(*lst, (*del));
		*lst = this;
	}
	ft_lstdelone(*lst, (*del));
	*lst = 0;
}
