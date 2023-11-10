/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlinguet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 07:54:32 by jlinguet          #+#    #+#             */
/*   Updated: 2023/11/09 10:09:50 by jlinguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	if (ft_strlen(s) < start)
	{
		substr = malloc(1 * sizeof(char));
		substr[0] = '\0';
		return (substr);
	}
	if (ft_strlen(&s[start]) < len)
		substr = malloc((ft_strlen(&s[start]) + 1) * sizeof(char));
	else
		substr = malloc((len + 1) * sizeof(char));
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
