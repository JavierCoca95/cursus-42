/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoca-me <fcoca-me@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 09:38:18 by fcoca-me          #+#    #+#             */
/*   Updated: 2023/05/03 09:38:18 by fcoca-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if( s == 0 || f == 0)
		return;
while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
