/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmoreil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:35:55 by thmoreil          #+#    #+#             */
/*   Updated: 2022/11/14 18:35:58 by thmoreil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dest;
	char		*srrc;

	i = 0;
	dest = (char *)dst;
	srrc = (char *)src;
	if (!dst && !src)
		return (0);
	if (dest > srrc)
		while (len-- > 0)
			dest[len] = srrc[len];
	else
	{
		while (i < len)
		{
			dest[i] = srrc[i];
			i++;
		}
	}
	return (dst);
}
