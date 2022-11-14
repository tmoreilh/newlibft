/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmoreil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:34:33 by thmoreil          #+#    #+#             */
/*   Updated: 2022/11/14 18:34:36 by thmoreil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*a;
	t_list	*b;

	b = NULL;
	while (lst != NULL)
	{
		a = ft_lstnew(f(lst->content));
		if (!a)
		{
			ft_lstclear(&b, del);
			return (NULL);
		}
		ft_lstadd_back(&b, a);
		lst = lst->next;
	}
	return (b);
}
