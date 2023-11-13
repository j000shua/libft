/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlinguet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 07:33:26 by jlinguet          #+#    #+#             */
/*   Updated: 2023/11/12 07:26:45 by jlinguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char *s, char sep)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] != sep && (s[i + 1] == sep || !s[i + 1]))
			n++;
		i++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		itab;
	int		len;

	tab = ft_calloc((ft_count_words((char *)s, c) + 1), sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	itab = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] != c)
			len++;
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
		{
			tab[itab] = ft_substr(s, i - len + 1, len);
			itab++;
			len = 0;
		}
		i++;
	}
	tab[itab] = NULL;
	return (tab);
}
