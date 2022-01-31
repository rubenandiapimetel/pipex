/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randia-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 16:41:19 by randia-p          #+#    #+#             */
/*   Updated: 2022/01/26 15:10:36 by randia-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*i;
	size_t			cont;

	i = (unsigned char *)b;
	cont = 0;
	while (cont < len)
	{
		i[cont] = c;
		cont++;
	}
	return (b);
}
