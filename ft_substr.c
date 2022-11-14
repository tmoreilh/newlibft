/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmoreil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:40:05 by thmoreil          #+#    #+#             */
/*   Updated: 2022/11/14 18:40:08 by thmoreil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*sub;

	i = 0;
	if (!s || start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	else
	{
		if (ft_strlen(&(s[start])) < len)
			len = ft_strlen(&(s[start]));
		sub = malloc(sizeof (char) * len + 1);
		if (!sub)
			return (NULL);
		while ((i < len) && s[start])
		{
			sub[i] = s[start];
			i++;
			start++;
		}
	}	
	sub[i] = 0;
	if (!sub)
		return (NULL);
	return (sub);
}
