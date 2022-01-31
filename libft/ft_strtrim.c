/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randia-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:26:51 by randia-p          #+#    #+#             */
/*   Updated: 2020/02/21 16:23:30 by randia-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int	end;

	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return ((char *)s1);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	if (*s1 == '\0')
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (end && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, 0, end + 1));
}
