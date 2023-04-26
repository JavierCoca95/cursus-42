/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoca-me <fcoca-me@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:28:36 by fcoca-me          #+#    #+#             */
/*   Updated: 2023/04/26 11:52:24 by fcoca-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l_len;

	i = 0;
	j = 0;
	l_len = ft_strlen(needle);
	if (needle[j] == '\0' || haystack == needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] != '\0' && needle[j] != '\0' && haystack[i
				+ j] == needle[j] && i + j < len)
			j++;
		if (j == l_len)
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char str[20] = "hola soy yo";
// 	char to_find[5] = "y";

// 	printf("%s", ft_strstr(str, to_find));
// }