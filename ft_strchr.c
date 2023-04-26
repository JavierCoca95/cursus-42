/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoca-me <fcoca-me@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:05:30 by fcoca-me          #+#    #+#             */
/*   Updated: 2023/04/26 10:08:19 by fcoca-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *pointer_to_s;
	pointer_to_s = (char *)s;
	while (*pointer_to_s != '\0')
	{
		if (*pointer_to_s == (char)c)
			return (pointer_to_s);
		pointer_to_s++;
	}
	if ((char)c == '\0')
		return (pointer_to_s);
	return (0);
}
