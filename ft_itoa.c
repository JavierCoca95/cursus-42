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

static int	ft_intlen(int i)
{
	int	count;

	count = 1;
	if (i < 0)
	{
		i *= -1;
		count++;
	}
	while (i >= 10)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int i;
	int len;
	char *str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	if (n < 0)
		i = 1;
	len = ft_intlen(n) + i;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[len] = '\0';
	while (n > 0) 
	{
		len--;
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	str[len] = '\0';
	return (str);
}
