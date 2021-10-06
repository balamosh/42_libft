/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sotherys <sotherys@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 22:43:16 by sotherys          #+#    #+#             */
/*   Updated: 2021/10/06 18:33:59 by sotherys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_hash(char const *s, char *hash)
{
	size_t	i;

	i = 0;
	while (i < 256)
		hash[i++] = 0;
	while (*s)
	{
		hash[(int) *s] = 1;
		++s;
	}
}

static int	ft_in_hash(char c, char *hash)
{
	return (hash[(int) c]);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	i;
	size_t	start;
	size_t	end;
	char	hash[256];

	fill_hash(set, hash);
	i = 0;
	start = 0;
	if (!s1)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && ft_in_hash(s1[start], hash))
		++start;
	while (end > start && ft_in_hash(s1[end - 1], hash))
		--end;
	new = (char *) malloc (sizeof(char) * (end - start + 1));
	if (!new)
		return (NULL);
	while (start < end)
		new[i++] = s1[start++];
	new[i] = '\0';
	return (new);
}
