/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlinguet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:03:53 by jlinguet          #+#    #+#             */
/*   Updated: 2023/11/09 10:09:16 by jlinguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	size_t			len;

	if (!set[0])
		return (ft_strdup(s1));
	start = 0;
	while (ft_strchr(set, s1[start]))
		start++;
	len = ft_strlen(s1) - 1;
	while (ft_strrchr(set, s1[len]))
		len--;
	return (ft_substr(s1, start, len - start + 1));
}
