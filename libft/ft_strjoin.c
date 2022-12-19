/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <lcombo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:13:30 by lcombo            #+#    #+#             */
/*   Updated: 2022/10/31 21:30:10 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_1;
	size_t	len_2;
	char	*ch;

	if (!s1 || !s2)
		return (0);
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	ch = (char *)ft_calloc(len_1 + len_2 + 1, sizeof(char));
	if (ch == 0)
		return (0);
	ft_strlcpy(ch, s1, len_1 + 1);
	ft_strlcat(ch, s2, len_2 + len_1 + 1);
	return (ch);
}
