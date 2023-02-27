/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:59:24 by razasharuku       #+#    #+#             */
/*   Updated: 2023/02/05 14:41:44 by sraza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*result;
	size_t	i;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	i = ft_lstsize(lst);
	result = ft_lstnew(f(lst->content));
	while (i > 1)
	{
		lst = lst->next;
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, new);
		i--;
	}
	return (result);
}
