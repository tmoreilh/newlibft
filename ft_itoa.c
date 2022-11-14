/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmoreil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:33:15 by thmoreil          #+#    #+#             */
/*   Updated: 2022/11/14 18:33:18 by thmoreil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int    count_size(int n)
{
    int        count;
    long    nb;

    nb = n;
    count = 1;
    if (nb < 0)
    {
        nb = -nb;
        count++;
    }
    while (nb > 9)
    {
        count++;
        nb = nb / 10;
    }
    return (count);
}

char        *ft_itoa(int nb)
{
    char    *str;
    long    nbr;
    int        i;

    i = 0;
    nbr = nb;
    if (!(str = (char*)malloc(sizeof(char) * count_size(nb) + 1)))
        return (NULL);
    if (nb < 0)
        str[0] = '-';
    if (nbr < 0)
        nbr = -nbr;
    str[count_size(nb) - i++] = '\0';
    while (nbr > 9)
    {
        str[count_size(nb) - i++] = (nbr % 10) + '0';
        nbr = nbr / 10;
    }
    str[count_size(nb) - i++] = (nbr % 10) + '0';
    return (str);
}

/*int main()
{
	char *str;
	char *str2;

	str = "-1";
	str2 = "42";
	printf("%d",strcmp(str, ft_itoa(-1)));

	printf("%d", strcmp(str2, ft_itoa(42)));
	return 0;
}*/
