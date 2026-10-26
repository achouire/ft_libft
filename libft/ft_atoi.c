/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchouir <abchouir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:34:50 by abchouir          #+#    #+#             */
/*   Updated: 2026/10/24 15:08:47 by abchouir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long		res2;
	long		res1;
	int			signe;
	int			i;

	res1 = 0;
	signe = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res2 = res1;
		res1 = res1 * 10 + (str[i] - '0');
		if (res1 / 10 != res2 && signe == 1)
			return (-1);
		if (res1 / 10 != res2 && signe == -1)
			return (0);
		i++;
	}
	return (signe * res1);
}
// int main ()
// {
// 	printf("%d\n\n", ft_atoi("844674407370955163"));
// 	printf("%d\n", atoi("844674407370955163"));
// }
