/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchouir <abchouir@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 18:52:52 by abchouir          #+#    #+#             */
/*   Updated: 2026/10/28 15:21:52 by abchouir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	if ((size != 0) && ((size_t)(-1) / size < count))
		return (NULL);
	i = size * count;
	ptr = malloc(i);
	if (!ptr)
		return (NULL);
	while (i > 0)
	{
		i--;
		ptr[i] = 0;
	}
	return (ptr);
}
