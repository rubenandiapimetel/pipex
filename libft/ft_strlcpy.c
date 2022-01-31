/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randia-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 17:18:19 by randia-p          #+#    #+#             */
/*   Updated: 2020/02/19 21:03:21 by randia-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;
	size_t	f;

	i = 0;
	if (!src)
		return (0);
	len = ft_strlen(src);
	if (dstsize == 0)
	{
		return (len);
	}
	f = dstsize - 1;
	while (f > 0 && src[i] != '\0')
	{
		dst[i] = src[i];
		f--;
		i++;
	}
	dst[i] = '\0';
	return (len);
}
