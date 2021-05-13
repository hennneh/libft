/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlehmann <hlehmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:54:48 by hlehmann          #+#    #+#             */
/*   Updated: 2021/02/13 16:57:26 by hlehmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while (*nptr == ' ' || *nptr == '\n'
		|| *nptr == '\t' || *nptr == '\v'
		|| *nptr == '\f' || *nptr == '\r')
		*nptr++;
	if (*nptr == '+')
		*nptr++;
	if (*nptr == '-')
	{
		*nptr++;
		sign *= -1;
	}
	while (*nptr != '\0')
	{
		if (*nptr < 48 || *nptr > 57)
			break ;
		else
			num = (num * 10) + (*nptr - 48);
		*nptr++;
	}
	return (num * sign);
}
