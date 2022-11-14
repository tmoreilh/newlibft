/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmoreil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:33:48 by thmoreil          #+#    #+#             */
/*   Updated: 2022/11/14 18:33:52 by thmoreil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*vague;

	if (!lst || !del)
		return ;
	vague = *lst;
	while (vague != NULL)
	{
		vague = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = vague;
	}
	*lst = NULL;
}
