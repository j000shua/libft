/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlinguet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 07:54:32 by jlinguet          #+#    #+#             */
/*   Updated: 2023/11/11 08:59:21 by jlinguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	if (ft_strlen(s) < start)
	{
		substr = ft_calloc(1, sizeof(char));
		substr[0] = '\0';
		return (substr);
	}
	if (ft_strlen(&s[start]) < len)
		substr = ft_calloc((ft_strlen(&s[start]) + 1), sizeof(char));
	else
		substr = ft_calloc((len + 1), sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	return (substr);
}
