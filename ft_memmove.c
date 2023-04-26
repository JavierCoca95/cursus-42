/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoca-me <fcoca-me@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 08:42:23 by fcoca-me          #+#    #+#             */
/*   Updated: 2023/04/26 08:47:07 by fcoca-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*pointer_to_dest;
	const unsigned char	*pointer_to_src;

	i = 0;
	pointer_to_dest = dest;
	pointer_to_src = src;
	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		while (n > 0)
		{
			pointer_to_dest[n - 1] = pointer_to_src[n - 1];
			n--;
		}
	}
	return (dest);
}
