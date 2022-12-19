/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <lcombo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:11:10 by lcombo            #+#    #+#             */
/*   Updated: 2022/10/31 21:26:13 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b1, size_t c)
{
	char	*ch1;
	char	ch;

	ch1 = b1;
	ch = '\0';
	while (c > 0)
	{
		*ch1 = ch;
		ch1++;
		c--;
	}
}