/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchouir <abchouir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 14:58:35 by abchouir          #+#    #+#             */
/*   Updated: 2026/10/24 10:48:28 by abchouir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *)src;
	dst = (unsigned char *)dest;
	while (i < n)
	{
		dst[i] = s[i];
		i++;
	}
	return (dest);
}
