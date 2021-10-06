/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sotherys <sotherys@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:32:21 by sotherys          #+#    #+#             */
/*   Updated: 2021/10/06 18:33:20 by sotherys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	i;
	int		res;

	i = 0;
	res = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < size)
	{
		if (s1[i] != s2[i])
			break ;
		i += 1;
	}
	if (i < size)
		res = (unsigned char) s1[i] - (unsigned char) s2[i];
	return (res);
}
