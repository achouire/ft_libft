/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchouir <abchouir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 09:29:56 by abchouir          #+#    #+#             */
/*   Updated: 2026/10/28 15:22:11 by abchouir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	int				i;

	i = 0;
	str = (unsigned char *)s;
	while (str[i])
		i++;
	if ((unsigned char)c == '\0')
		return ((char *)&str[i]);
	i--;
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}
