/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <lcombo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:13:33 by lcombo            #+#    #+#             */
/*   Updated: 2022/10/31 21:30:14 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_src;
	size_t	i;
	size_t	j;

	len_src = ft_strlen(src);
	i = 0;
	j = 0;
	if (size == 0)
		return (len_src);
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] && ((i + j) < (size - 1)))
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i + j < size)
		dest[i + j] = '\0';
	return (len_src + i);
}
