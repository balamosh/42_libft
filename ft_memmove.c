/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sotherys <sotherys@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:00:02 by sotherys          #+#    #+#             */
/*   Updated: 2021/10/06 18:32:15 by sotherys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_memmove_right(void *dst, const void *src, size_t len)
{
	int	i;

	i = len - 1;
	while (i >= 0)
	{
		((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
		--i;
	}
}

static void	ft_memmove_left(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
		++i;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!src && !dst)
		return (dst);
	if (src < dst)
		ft_memmove_right(dst, src, len);
	else
		ft_memmove_left(dst, src, len);
	return (dst);
}
