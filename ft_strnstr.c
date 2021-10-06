/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sotherys <sotherys@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:30:31 by sotherys          #+#    #+#             */
/*   Updated: 2021/10/06 18:33:25 by sotherys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (!needle_len)
		return ((char *) haystack);
	if (len < needle_len)
		return (NULL);
	i = 0;
	while (haystack[i] && i <= len - needle_len)
	{
		if (ft_strncmp(haystack + i, needle, needle_len) == 0)
			return ((char *) haystack + i);
		++i;
	}
	return (NULL);
}
