/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randia-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 18:56:37 by randia-p          #+#    #+#             */
/*   Updated: 2022/01/26 15:14:58 by randia-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*mem;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (*s == '\0')
		return (ft_strdup(""));
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	mem = malloc(sizeof(char) * len + 1);
	if (!(mem))
		return (NULL);
	i = 0;
	while (i < len)
	{
		mem[i] = s[i + start];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
