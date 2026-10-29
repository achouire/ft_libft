/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchouir <abchouir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 20:53:03 by abchouir          #+#    #+#             */
/*   Updated: 2026/10/24 10:48:38 by abchouir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dest;
	if (s2 < s1)
	{
		while (n--)
			*s2++ = *s1++;
	}
	else
	{
		while (n > 0)
		{
			n--;
			s2[n] = s1[n];
		}
	}
	return (dest);
}
