/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchouir <abchouir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 18:52:52 by abchouir          #+#    #+#             */
/*   Updated: 2026/10/23 23:54:52 by abchouir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t	i;

    // ptr = NULL;
    i = size * count;
    // if ((size != 0) && (i / size != count))
    //     return (NULL);
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

#include <stdio.h>

int main(void)
{
    unsigned char *ptr;
    size_t i;

    ptr = ft_calloc(5, 4);
    if (!ptr)
        return (1);
    i = 0;
    while (i < 20)
    {
        printf("%d ", ptr[i]);
        i++;
    }
    printf("\n");
    free(ptr);
    return (0);
}

