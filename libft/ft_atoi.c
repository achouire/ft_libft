/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchouir <abchouir@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:34:50 by abchouir          #+#    #+#             */
/*   Updated: 2026/10/28 15:18:34 by abchouir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					s;
	long				r;
	long				tmp;

	i = 0;
	s = 1;
	r = 0;
	tmp = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			s = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		tmp = r;
		r = r * 10 + (str[i++] - '0');
		if (s == 1 && tmp != r / 10)
			return (-1);
		else if (s == -1 && tmp != r / 10)
			return (0);
	}
	return (r * s);
}
