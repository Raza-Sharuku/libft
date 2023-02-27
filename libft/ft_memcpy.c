/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:36:20 by razasharuku       #+#    #+#             */
/*   Updated: 2023/02/16 12:41:38 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src1;
	size_t			i;

	dest = (char *)dst;
	src1 = (const char *)src;
	i = 0;
	if (src == NULL && dst == NULL)
		return (dst);
	while (i < n)
	{
		*dest = *src1;
		++dest;
		++src1;
		i++;
	}
	return (dst);
}
