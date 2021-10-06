/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sotherys <sotherys@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:28:54 by sotherys          #+#    #+#             */
/*   Updated: 2021/10/06 18:33:03 by sotherys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	si;
	size_t	di;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (d_len >= size)
		return (size + s_len);
	si = 0;
	di = d_len;
	while (src[si] && di < size - 1)
		dst[di++] = src[si++];
	dst[di] = '\0';
	return (d_len + s_len);
}
