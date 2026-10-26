/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchouir <abchouir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:32:17 by abchouir          #+#    #+#             */
/*   Updated: 2026/10/24 10:50:54 by abchouir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = size - 1;
	i = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	while (0 < j && *src)
	{
		*dst = *src;
		dst++;
		src++;
		j--;
	}
	*dst = '\0';
	return (i);
}
