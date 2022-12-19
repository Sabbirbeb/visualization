/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <lcombo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:14:00 by lcombo            #+#    #+#             */
/*   Updated: 2022/10/31 21:30:41 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*ch;
	unsigned char	c1;
	int				i;

	ch = (char *)s;
	c1 = c;
	i = ft_strlen(ch);
	while (i >= 0)
	{
		if (ch[i] == c1)
			return (&ch[i]);
		i--;
	}
	return (NULL);
}
