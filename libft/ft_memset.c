/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:08:12 by razasharuku       #+#    #+#             */
/*   Updated: 2023/02/09 21:29:45 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	uc;
	unsigned char	*dst;

	dst = (unsigned char *)b;
	uc = (unsigned char )c;
	if (len != 0)
	{
		while (len-- > 0)
		{
			*dst++ = uc;
		}
		return (b);
	}
	return (b);
}
