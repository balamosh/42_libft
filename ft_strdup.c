/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sotherys <sotherys@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:38:28 by sotherys          #+#    #+#             */
/*   Updated: 2021/10/06 18:32:50 by sotherys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*new;

	len = ft_strlen(s1) + 1;
	new = (char *) malloc(sizeof(char) * len);
	if (!new)
		return (NULL);
	return (ft_memcpy(new, s1, len));
}
