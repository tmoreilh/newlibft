/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmoreil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:39:23 by thmoreil          #+#    #+#             */
/*   Updated: 2022/11/14 18:39:25 by thmoreil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (haystack == 0 && len == 0)
		return (0);
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[i] != 0)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == 0 && (i + j) < len)
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
