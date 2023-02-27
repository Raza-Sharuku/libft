/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:38:18 by sraza             #+#    #+#             */
/*   Updated: 2023/02/01 19:59:21 by sraza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (((unsigned char )s1[i] - (unsigned char )s2[i]) != 0)
			return ((unsigned char )s1[i] - (unsigned char )s2[i]);
		i++;
	}
	if (i != n)
		return ((unsigned char )s1[i] - (unsigned char )s2[i]);
	return (0);
}
