/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoca-me <fcoca-me@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:44:33 by fcoca-me          #+#    #+#             */
/*   Updated: 2023/04/26 10:01:46 by fcoca-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pointer_to_s;
	size_t			i;

	pointer_to_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (pointer_to_s[i] == (unsigned char)c)
			return (pointer_to_s + i);
		i++;
	}
	return (0);
}
