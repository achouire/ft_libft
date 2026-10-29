/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchouir <abchouir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 14:51:13 by abchouir          #+#    #+#             */
/*   Updated: 2026/10/22 18:40:20 by abchouir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_creat_str(char *str, size_t start, size_t end, char const *s1)
{
	size_t	i;

	i = 0;
	while (start <= end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
}

static size_t	get_len(size_t start, size_t end)
{
	size_t	len;

	len = 0;
	while (start <= end)
	{
		start++;
		len++;
	}
	return (len);
}

static char	*empty_str(void)
{
	char	*str;

	str = malloc(1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && (ft_strchr(set, s1[start])))
		start++;
	if (s1[start] == '\0')
		str = empty_str();
	else
	{
		end = ft_strlen(s1) - 1;
		while (ft_strchr(set, s1[end]))
			end--;
		len = get_len(start, end);
		str = malloc(len + 1);
		if (!str)
			return (NULL);
		ft_creat_str(str, start, end, s1);
	}
	return (str);
}
