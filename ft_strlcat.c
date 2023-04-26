/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoca-me <fcoca-me@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 08:42:57 by fcoca-me          #+#    #+#             */
/*   Updated: 2023/04/26 08:44:17 by fcoca-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sizedest;
	unsigned int	sizesrc;
	unsigned int	ret;

	sizedest = ft_strlen(dest);
	sizesrc = ft_strlen(src);
	if (size < sizedest)
		ret = sizesrc + size;
	else
		ret = sizesrc + sizedest;
	i = 0;
	while (src[i] != '\0' && sizedest + i + 1 < size)
	{
		dest[sizedest + i] = src[i];
		i++;
	}
	dest[sizedest + i] = '\0';
	return (ret);
}
