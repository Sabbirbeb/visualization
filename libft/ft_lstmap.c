/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <lcombo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:12:13 by lcombo            #+#    #+#             */
/*   Updated: 2022/10/31 21:28:29 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*l;
	t_list	*next;

	l = 0;
	if (!lst || !f)
		return (l);
	map = lst->next;
	l = ft_lstnew((*f)(lst->content));
	if (!l)
		return (NULL);
	while (map)
	{
		next = ft_lstnew((*f)(map->content));
		if (!next)
		{
			ft_lstclear(&l, del);
			return (NULL);
		}
		ft_lstadd_back(&l, next);
		map = map->next;
	}
	return (l);
}
