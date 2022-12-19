/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <lcombo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:12:40 by lcombo            #+#    #+#             */
/*   Updated: 2022/10/31 21:28:58 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t count)
{
	unsigned char	*ch;
	unsigned char	*ch1;
	int				i;

	if (!dest && !source)
		return (NULL);
	i = 0;
	ch = dest;
	ch1 = (unsigned char *)source;
	while (i < (int)count)
	{
		ch[i] = ch1[i];
		i++;
	}
	return (dest);
}
