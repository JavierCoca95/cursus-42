/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoca-me <fcoca-me@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:52:07 by fcoca-me          #+#    #+#             */
/*   Updated: 2023/04/21 08:55:11 by fcoca-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*pointer_to_char;

	pointer_to_char = b;
	i = 0;
	while (i < len)
	{
		*pointer_to_char = c;
		i++;
		pointer_to_char++;
	}
	return (b);
}
