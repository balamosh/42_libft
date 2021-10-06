/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sotherys <sotherys@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:47:28 by sotherys          #+#    #+#             */
/*   Updated: 2021/10/06 18:32:46 by sotherys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (1)
	{
		if (*s == (char) c)
			return ((char *) s);
		if (*s == '\0')
			break ;
		++s;
	}
	return (NULL);
}
