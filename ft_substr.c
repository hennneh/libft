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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	dest = (char *)malloc(sizeof(*s) * (len + 1));
	i = 0;
	if (!dest)
		return (NULL);
	while (s[i])
	{
		if (i <= len - start)
		{
			dest[i] = s[start];
			start++;
			i++;
		}
	}
	dest[i] = 0;
	return (dest);
}
