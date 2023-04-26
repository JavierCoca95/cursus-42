/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoca-me <fcoca-me@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 09:10:08 by fcoca-me          #+#    #+#             */
/*   Updated: 2023/04/21 11:54:47 by fcoca-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*pointer_to_dst;
	const unsigned char	*pointer_to_src;
	size_t				i;

	i = 0;
	pointer_to_dst = dst;
	pointer_to_src = src;
	while (i < n)
	{
		*pointer_to_dst = *pointer_to_src;
		i++;
		pointer_to_dst++;
		pointer_to_src++;
	}
	return (dst);
}
