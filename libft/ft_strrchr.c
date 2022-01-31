/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randia-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 16:47:10 by randia-p          #+#    #+#             */
/*   Updated: 2022/01/26 15:14:46 by randia-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	cont;

	cont = 0;
	while (s[cont])
	{
		cont++;
	}
	while (cont >= 0)
	{
		if ((unsigned char)c == (unsigned char)s[cont])
		{
			return ((char *)s + cont);
		}
		cont--;
	}
	return (NULL);
}
