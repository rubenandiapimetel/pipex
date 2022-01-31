/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randia-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 16:34:58 by randia-p          #+#    #+#             */
/*   Updated: 2022/01/26 15:05:36 by randia-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	size_t			cont;
	unsigned char	c2;

	s2 = (unsigned char *)s;
	cont = 0;
	c2 = (unsigned char)c;
	while (cont < n)
	{
		if (s2[cont] == c2)
		{
			return ((&s2[cont]));
		}
		cont++;
	}
	return (NULL);
}
