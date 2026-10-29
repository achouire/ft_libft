/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchouir <abchouir@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:46:25 by abchouir          #+#    #+#             */
/*   Updated: 2026/10/24 15:18:31 by abchouir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_empty_str(void)
{
	char	*sub;

	sub = malloc(1);
	if (!sub)
		return (NULL);
	sub[0] = '\0';
	return (sub);
}

static char	*ft_creat_str(char const *s, size_t sub_len, unsigned int start)
{
	char	*sub;
	size_t	i;

	sub = malloc(sub_len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < sub_len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		r;
	size_t		remainder;
	size_t		sub_len;
	char		*sub;

	if (!s)
		return (NULL);
	r = 0;
	sub_len = len;
	while (s[r])
		r++;
	if ((size_t) start > r)
		sub = ft_empty_str();
	else
	{
		remainder = r - (size_t)start;
		if (remainder < len)
			sub_len = remainder;
		sub = ft_creat_str(s, sub_len, start);
	}
	return (sub);
}
