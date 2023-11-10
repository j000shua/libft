/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlinguet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:43:05 by jlinguet          #+#    #+#             */
/*   Updated: 2023/11/08 16:25:49 by jlinguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	little_len;

	if (!little[0])
		return ((char *)big);
	little_len = ft_strlen(little);
	if (little_len > len)
		return (NULL);
	i = 0;
	while (big[i] && i < len)
	{
		printf("i = %d\nbig[i] = %c et little[0] = %c\n", i,big[i], little[0]);
		if (little_len > len - i)
			return (NULL);
		if (big[i] == little[0])
		{
			if (ft_strncmp((char *)&big[i], little, little_len))
			{
				printf("strncmp valide\n");
				return ((char *)&big[i]);
			}
			else
				printf("strncmp invalide\n");
		}
		i++;
	}
	return ("\nNULL\n");
	return (NULL);
}
