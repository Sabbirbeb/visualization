/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <lcombo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:13:44 by lcombo            #+#    #+#             */
/*   Updated: 2022/10/31 21:30:29 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ch;
	size_t	i;

	if (!s)
		return (0);
	i = ft_strlen(s);
	ch = (char *)ft_calloc(i + 1, sizeof(char));
	if (!ch)
		return (0);
	i = 0;
	while (s[i])
	{
		ch[i] = f(i, s[i]);
		i++;
	}
	return (ch);
}
