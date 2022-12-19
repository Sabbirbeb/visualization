/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <lcombo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:12:05 by lcombo            #+#    #+#             */
/*   Updated: 2022/10/31 21:28:17 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	tmp = lst->next;
	if (lst->content)
		(*f)(lst->content);
	while (tmp)
	{
		if (lst->content)
			(*f)(tmp->content);
		tmp = tmp->next;
	}
}
