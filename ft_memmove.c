/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlinguet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:57:43 by jlinguet          #+#    #+#             */
/*   Updated: 2023/11/10 12:49:44 by jlinguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;
	size_t	n2;

	*tmp = 0;
	n2 = n;
	while (n2)
	{
		*tmp = *(unsigned char *)src;
		n--;
		tmp++;
		src++;
	}
	ft_memcpy(dest, tmp - n, n);
	return (dest);
}
