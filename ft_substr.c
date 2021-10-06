/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sotherys <sotherys@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 22:26:24 by sotherys          #+#    #+#             */
/*   Updated: 2021/10/06 18:34:06 by sotherys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	s_len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		start = s_len;
	len = min(len, s_len - start);
	new = (char *) malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			new[j++] = s[i];
		++i;
	}
	new[j] = '\0';
	return (new);
}
