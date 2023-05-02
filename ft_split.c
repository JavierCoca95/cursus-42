/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoca-me <fcoca-me@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:13:50 by fcoca-me          #+#    #+#             */
/*   Updated: 2023/05/02 10:13:50 by fcoca-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	**ft_free(char **new_s)
{
	size_t	j;

	j = 0;
	while (new_s[j] != NULL)
	{
		free(new_s[j]);
		new_s[j] = NULL;
		j++;
	}
	free(new_s);
	return (NULL);
}

static size_t	ft_wordcounter(char const *s, char c)
{
	size_t	i;
	size_t	n_words;

	i = 0;
	n_words = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			n_words++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (n_words);
}

static char	*ft_word_cpy(char *word, size_t word_len, char const *s,
		int i_reminder)
{
	size_t	k;

	k = 0;
	while (k < word_len)
	{
		word[k] = s[i_reminder + k];
		k++;
	}
	word[k] = '\0';
	return (word);
}

static char	**ft_splitmaker(char **new_s,
							size_t n_words,
							char const *s,
							char c)
{
	size_t	j;
	size_t	i;
	size_t	i_reminder;
	size_t	word_len;

	j = 0;
	i = 0;
	word_len = 0;
	while (s[i] != '\0' && j < n_words)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		i_reminder = i;
		while (s[i] != '\0' && s[i++] != c)
			word_len++;
		new_s[j] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!(new_s))
			return (ft_free(new_s));
		ft_word_cpy(new_s[j], word_len, s, i_reminder);
		word_len = 0;
		j++;
	}
	new_s[j] = 0;
	return (new_s);
}

char	**ft_split(char const *s, char c)
{
	size_t	n_words;
	char	**new_s;

	if (s == NULL)
		return (NULL);
	n_words = ft_wordcounter(s, c);
	new_s = (char **)malloc(sizeof(char *) * (n_words + 1));
	if (!(new_s))
		return (NULL);
	new_s[n_words] = NULL;
	ft_splitmaker(new_s, n_words, s, c);
	return (new_s);
}
