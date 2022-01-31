/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randia-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 13:14:42 by randia-p          #+#    #+#             */
/*   Updated: 2022/01/26 15:10:37 by randia-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		n;
	int		cont;

	if (!s1 || !s2)
		return (NULL);
	cont = 0;
	n = ft_strlen(s1) + ft_strlen(s2);
	s3 = (char *)malloc(sizeof(char) * (n + 1));
	if (!s3)
		return (NULL);
	while (*s1)
	{
		s3[cont] = *s1;
		cont++;
		s1++;
	}
	while (*s2)
	{
		s3[cont] = *s2;
		cont++;
		s2++;
	}
	s3[cont] = '\0';
	return (s3);
}
