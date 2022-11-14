/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmoreil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:38:53 by thmoreil          #+#    #+#             */
/*   Updated: 2022/11/14 18:38:56 by thmoreil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*slt;

	i = 0;
	if (!s || !f)
	{
		return (NULL);
	}
	slt = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!slt)
		return (NULL);
	while (s[i])
	{
		slt[i] = f(i, s[i]);
		i++;
	}
	slt[i] = '\0';
	return (slt);
}
