/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sotherys <sotherys@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:11:12 by sotherys          #+#    #+#             */
/*   Updated: 2021/10/06 18:33:07 by sotherys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;

	i = 0;
	srcsize = ft_strlen(src);
	if (dstsize == 0)
		return (srcsize);
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		if (src[i] == '\0')
			return (srcsize);
		i += 1;
	}
	dst[i] = '\0';
	return (srcsize);
}
