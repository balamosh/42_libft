/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sotherys <sotherys@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:20:04 by sotherys          #+#    #+#             */
/*   Updated: 2021/10/06 18:33:16 by sotherys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	len;
	size_t	i;

	if (!(s && f))
		return (NULL);
	len = ft_strlen(s);
	new = (char *) malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = f(i, s[i]);
		++i;
	}
	new[len] = '\0';
	return (new);
}
