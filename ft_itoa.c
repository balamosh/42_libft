/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sotherys <sotherys@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 19:50:41 by sotherys          #+#    #+#             */
/*   Updated: 2021/10/06 18:31:10 by sotherys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	cnt;

	cnt = 0;
	if (n <= 0)
		++cnt;
	while (n)
	{
		n /= 10;
		++cnt;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	size_t		i;
	long int	nb;
	char		*new;

	i = ft_intlen(n);
	nb = n;
	new = (char *) malloc(sizeof(char) * (i + 1));
	if (!new)
		return (NULL);
	new[i--] = '\0';
	if (nb == 0)
		new[0] = '0';
	if (nb < 0)
	{
		new[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		new[i--] = nb % 10 + '0';
		nb /= 10;
	}
	return (new);
}
