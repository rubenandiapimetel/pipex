/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randia-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 17:14:22 by randia-p          #+#    #+#             */
/*   Updated: 2020/02/13 17:03:52 by randia-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fstr;
	unsigned int	i;
	int				j;

	if (!s || f == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s);
	fstr = malloc(sizeof(char) * (j + 1));
	if (!fstr)
		return (NULL);
	while (s[i] != 0)
	{
		fstr[i] = f(i, s[i]);
		i++;
	}
	fstr[i] = '\0';
	return (fstr);
}
