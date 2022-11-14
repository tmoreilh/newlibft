/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmoreil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:35:43 by thmoreil          #+#    #+#             */
/*   Updated: 2022/11/14 18:35:46 by thmoreil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*dest;
	char	*srrc;

	dest = (char *)dst;
	srrc = (char *)src;
	i = 0;
	if (!dest && !src)
	{
		return (0);
	}
	while (n)
	{
		dest[i] = srrc[i];
		i++;
		n--;
	}
	return (dst);
}
