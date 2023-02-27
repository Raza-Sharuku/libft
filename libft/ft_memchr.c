/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:34:13 by razasharuku       #+#    #+#             */
/*   Updated: 2023/02/09 21:36:12 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p1;
	unsigned char	uc;

	p1 = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n > 0)
	{
		if (*p1 == uc)
		{
			return (p1);
		}
		n--;
		p1++;
	}
	return (NULL);
}
