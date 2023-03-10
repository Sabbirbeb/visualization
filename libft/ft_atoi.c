/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <lcombo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:11:06 by lcombo            #+#    #+#             */
/*   Updated: 2022/10/31 21:26:05 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_char(const char *st, int i, int c)
{
	long long int	num;
	long long int	f;

	num = 0;
	f = 922337203685477580;
	while ((48 <= st[i]) && (st[i] <= 57))
	{
		if ((i == 19) && (st[i] == '7') && (c == -1))
			return (-1);
		if ((num - f) > 0)
			return (-2);
		else if ((((num - f) - 7) * -1) >= (st[i] - 48))
			num = 10 * num + (st[i] - 48);
		else
			return (-2);
		i++;
	}
	return ((int)num);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	q;

	i = 0;
	s = 1;
	while (1)
	{
		while (((9 <= str[i]) && (str[i] <= 13)) || (str[i] == ' '))
			i++;
		if (str[i] == '-')
		{
			s = -1;
			i++;
		}
		else if (str[i] == '+')
			i++;
		q = ft_char(str, i, s);
		if ((q == -2) && (s == -1))
			return (0);
		else if (q == -2)
			return (-1);
		return (q * s);
	}
	return (0);
}
