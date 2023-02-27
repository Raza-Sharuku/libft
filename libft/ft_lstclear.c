/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:59:42 by razasharuku       #+#    #+#             */
/*   Updated: 2023/02/04 21:29:13 by sraza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new;

	if (lst == NULL || del == NULL)
		return ;
	if (*lst == NULL)
		return ;
	while (*lst != NULL)
	{
		new = (*lst)->next;
		ft_lstdelone((*lst), del);
		*lst = new;
	}
	*lst = NULL;
	return ;
}
