/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmoreil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:37:22 by thmoreil          #+#    #+#             */
/*   Updated: 2022/11/14 18:37:24 by thmoreil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	p;
	char	*d;

	i = 0;
	p = (char)c;
	d = (char *)s;
	while (s[i] && s[i] != p)
		i++;
	if (s[i] == p)
		return (&d[i]);
	return (0);
}
