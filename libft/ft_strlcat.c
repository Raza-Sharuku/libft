/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:47:01 by sraza             #+#    #+#             */
/*   Updated: 2023/02/05 15:11:36 by sraza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d_size;
	size_t	s_size;

	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
	d_size = ft_strlen(dst);
	s_size = ft_strlen(src);
	i = 0;
	if (d_size >= dstsize)
		return (dstsize + s_size);
	while (src[i] != '\0' && i < (dstsize - d_size - 1))
	{
		dst[d_size + i] = src[i];
		i++;
	}
	dst[d_size + i] = '\0';
	return (d_size + s_size);
}
