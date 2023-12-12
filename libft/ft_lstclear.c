/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpassin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 03:45:53 by tpassin           #+#    #+#             */
/*   Updated: 2023/11/27 17:01:17 by tpassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !*lst || !(*del))
		return ;
	tmp = *lst;
	while (*lst)
	{
		*lst = tmp->next;
		ft_lstdelone(tmp, del);
		tmp = *lst;
	}
}
