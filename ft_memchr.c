/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmoreil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:35:15 by thmoreil          #+#    #+#             */
/*   Updated: 2022/11/14 18:35:18 by thmoreil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*plot;

	plot = (unsigned char *)s;
	c = (unsigned char)c;
	i = 0;
	while (n)
	{
		if (plot[i] == c)
		{
			return (&plot[i]);
		}
		i++;
		n--;
	}
	return (0);
}
