/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <lcombo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:12:49 by lcombo            #+#    #+#             */
/*   Updated: 2022/10/31 21:29:20 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*ch1;
	unsigned char	ch;

	ch1 = b;
	ch = (unsigned char)c;
	while (len--)
	{
		*ch1 = ch;
		ch1++;
	}
	return (b);
}
