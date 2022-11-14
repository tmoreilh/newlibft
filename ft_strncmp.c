/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmoreil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:39:08 by thmoreil          #+#    #+#             */
/*   Updated: 2022/11/14 18:39:10 by thmoreil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				h;
	unsigned int	i;

	i = 1;
	h = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n && s1[h] == s2[h] && s1[h] != 0)
	{
		h++;
		i++;
	}
	return ((unsigned char)s1[h] - (unsigned char)s2[h]);
}
