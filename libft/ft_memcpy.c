/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randia-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 16:38:41 by randia-p          #+#    #+#             */
/*   Updated: 2022/01/26 15:05:30 by randia-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			cont;
	unsigned char	*dest2;
	unsigned char	*src2;

	dest2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	cont = 0;
	if (!n || dst == src)
		return (dst);
	while (cont < n)
	{
		*(dest2 + cont) = *(src2 + cont);
		cont++;
	}
	return (dst);
}
