/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randia-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 16:40:48 by randia-p          #+#    #+#             */
/*   Updated: 2022/01/26 15:08:30 by randia-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*sr;

	dest = (unsigned char *)dst;
	sr = (const unsigned char *)src;
	if (dest > sr)
	{
		while (len--)
			dest[len] = sr[len];
	}
	else if (dest < sr)
		ft_memcpy(dst, src, len);
	return (dst);
}
