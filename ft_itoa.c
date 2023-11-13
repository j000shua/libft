/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlinguet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:25:49 by jlinguet          #+#    #+#             */
/*   Updated: 2023/11/12 07:26:27 by jlinguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	if (n == INT_MIN)
		return (11);
	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 9)
	{
		len++;
		n /= 10;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;

	s = ft_calloc((ft_intlen(n) + 1), sizeof(char));
	if (!s)
		return (NULL);
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
		i = ft_intlen(n);
	}
	else
		i = ft_intlen(n) - 1;
	while (n > 9)
	{
		s[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	s[i] = n % 10 + '0';
	return (s);
}
