/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randia-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 18:17:25 by randia-p          #+#    #+#             */
/*   Updated: 2022/01/26 15:08:56 by randia-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	lnb;
	char	c;

	lnb = n;
	if (lnb < 0)
	{
		lnb = -lnb;
		write(fd, "-", 1);
	}
	if (lnb > 9)
	{
		ft_putnbr_fd(lnb / 10, fd);
		ft_putnbr_fd(lnb % 10, fd);
	}
	else
	{
		c = lnb + '0';
		write(fd, &c, 1);
	}
}
