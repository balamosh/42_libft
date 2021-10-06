/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sotherys <sotherys@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:47:28 by sotherys          #+#    #+#             */
/*   Updated: 2021/10/06 18:33:29 by sotherys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;

	ret = NULL;
	while (1)
	{
		if (*s == (char) c)
			ret = (char *) s;
		if (*s == '\0')
			break ;
		++s;
	}
	return (ret);
}
