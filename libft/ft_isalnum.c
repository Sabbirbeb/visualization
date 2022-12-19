/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <lcombo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:11:17 by lcombo            #+#    #+#             */
/*   Updated: 2022/10/31 21:26:42 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ch)
{
	if (((64 < ch) && (ch < 91)) \
			|| ((96 < ch) && (ch < 123)) \
			|| ((47 < ch) && (ch < 58)))
	{
		return (1);
	}
	return (0);
}