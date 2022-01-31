/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randia-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 20:09:13 by randia-p          #+#    #+#             */
/*   Updated: 2020/02/23 17:06:50 by randia-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*string;
	int		str_size;
	int		i;

	i = 0;
	str_size = 0;
	while (s1[str_size])
	{
		str_size++;
	}
	string = (char *)malloc(str_size * sizeof(*string) + 1);
	if (!string)
		return (NULL);
	while (i < str_size)
	{
		string[i] = s1[i];
		i++;
	}
	string[str_size] = '\0';
	return (string);
	free(string);
}
