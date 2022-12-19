/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <lcombo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:13:37 by lcombo            #+#    #+#             */
/*   Updated: 2022/10/31 21:30:19 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (src[y] != '\0')
		y++;
	if (n == 0)
		return (y);
	while (i < y && i < (n - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (y);
}
