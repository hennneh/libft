/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlehmann <hlehmann@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 16:54:48 by hlehmann          #+#    #+#             */
/*   Updated: 2021/05/13 16:57:26 by hlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	i;
	int		j;

	dest = NULL;
	i = 0;
	if ((j = ft_strlen(s1)))
		j--;
	if (s1)
	{
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (j >= 0 && ft_strchr(set, s1[j]))
			j--;
		dest = ft_substr(s1, i, (j - i + 1));
	}
	return (dest);
}
