/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmoreil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:35:06 by thmoreil          #+#    #+#             */
/*   Updated: 2022/11/14 18:35:08 by thmoreil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*dest;
	unsigned char	*srrc;

	c = (unsigned char)c;
	dest = (unsigned char *)dst;
	srrc = (unsigned char *)src;
	i = 0;
	while (n)
	{
		dest[i] = srrc[i];
		if (c == srrc[i])
		{
			return (dst + (i + 1));
		}
		i++;
		n--;
	}
	return (0);
}
