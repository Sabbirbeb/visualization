/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <lcombo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:12:36 by lcombo            #+#    #+#             */
/*   Updated: 2022/10/31 21:28:53 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ch;
	unsigned char	*ch1;
	int				i;

	i = 0;
	ch = (unsigned char *)s1;
	ch1 = (unsigned char *)s2;
	while (i < (int)n)
	{
		if (ch[i] != ch1[i])
			return (ch[i] - ch1[i]);
		i++;
	}
	return (0);
}
