/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlinguet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 07:29:22 by jlinguet          #+#    #+#             */
/*   Updated: 2023/11/13 07:27:50 by jlinguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;

	if (!dst || !src)
		return (0);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + ft_strlen(src));
	if (size <= dst_len + ft_strlen(src))
	{
		i = 0;
		while (i < size - dst_len - 1)
		{
			*(dst + dst_len + i) = src[i];
			i++;
		}
		return (dst_len + ft_strlen(src));
	}
	return (dst_len + ft_strlcpy(dst + dst_len, src, size - dst_len));
}
