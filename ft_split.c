/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlehmann <hlehmann@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 16:54:48 by hlehmann          #+#    #+#             */
/*   Updated: 2021/05/13 16:57:26 by hlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_words(char const *s, char c)
{
	size_t	words;
	size_t	i;
	size_t	j;

	words = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i + j] && s[i + j] != c)
			j++;
		if (j)
			words++;
		i += j;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_words(s, c);
	dest = malloc(sizeof(char *) * (words + 1));
	if (!dest)
		return (NULL);
}
