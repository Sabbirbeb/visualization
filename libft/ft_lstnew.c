/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <lcombo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:12:20 by lcombo            #+#    #+#             */
/*   Updated: 2022/10/31 21:28:36 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ls;

	ls = (t_list *)ft_calloc(1, sizeof(t_list));
	if (!ls)
		return (0);
	ls->content = content;
	ls->next = 0;
	return (ls);
}
