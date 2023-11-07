/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlinguet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:15:34 by jlinguet          #+#    #+#             */
/*   Updated: 2023/11/07 14:15:39 by jlinguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int	ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);

int	ft_toupper(int c);
int	ft_tolower(int c);

int	ft_atoi(const char *nptr);

#endif
