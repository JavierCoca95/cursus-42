/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoca-me <fcoca-me@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:47:19 by fcoca-me          #+#    #+#             */
/*   Updated: 2023/05/02 10:47:19 by fcoca-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	size_t	ft_intlen(int num)
{
	size_t	len;

	len = 0;
	if (num <= 0)
		len++;
	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	long	num;
	char	*new_s;

	len = ft_intlen(n);
	num = n;
	new_s = (char *)malloc((sizeof(char) * len) + 1);
	if (new_s == NULL)
		return (NULL);
	if (num < 0)
	{
		new_s[0] = '-';
		num *= -1;
	}
	else if (num == 0)
		new_s[0] = '0';
	new_s[len--] = '\0';
	while (num != 0)
	{
		new_s[len] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (new_s);
}
