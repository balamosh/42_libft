/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sotherys <sotherys@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 23:29:58 by sotherys          #+#    #+#             */
/*   Updated: 2021/10/06 18:32:42 by sotherys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

static int	ft_word_count(const char *str, char c)
{
	int		wc;
	int		i;
	int		word_len;

	wc = 0;
	i = 0;
	word_len = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			if (word_len != 0)
				wc += 1;
			word_len = 0;
		}
		else
			word_len += 1;
		i += 1;
	}
	if (word_len > 0)
		return (wc + 1);
	return (wc);
}

static int	ft_substr_to_sep(const char *str, char c, char **dup)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i += 1;
	if (i == 0)
		return (0);
	*dup = ft_substr(str, 0, i);
	return (i);
}

char	**ft_split(const char *str, char c)
{
	size_t	wi;
	size_t	word_len;
	char	**out;

	if (!str)
		return (NULL);
	out = (char **) malloc(sizeof(char *) * (ft_word_count(str, c) + 1));
	if (NULL == out)
		return (NULL);
	wi = 0;
	while (*str != '\0')
	{
		if (*str == c)
		{
			++str;
			continue ;
		}
		word_len = ft_substr_to_sep(str, c, out + wi);
		wi += 1;
		str += word_len;
	}
	out[wi] = NULL;
	return (out);
}
