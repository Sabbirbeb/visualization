/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <lcombo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:14:11 by lcombo            #+#    #+#             */
/*   Updated: 2022/10/31 21:30:51 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ch;
	size_t	max_len;

	if (s == 0)
		return (NULL);
	if (start >= ft_strlen(s))
		max_len = 0;
	else
	{
		max_len = ft_strlen(s) - start;
		if (max_len > len)
			max_len = len;
	}
	ch = (char *)malloc(max_len + 1);
	if (!ch)
		return (NULL);
	ft_strlcpy(ch, &s[start], max_len + 1);
	return (ch);
}
