/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:02:37 by sraza             #+#    #+#             */
/*   Updated: 2023/02/05 13:44:06 by sraza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		i;
	char	cc;

	i = 0;
	cc = (char)(c);
	while (*s != '\0')
	{
		if (*s == cc)
		{
			p = (char *)s;
			i++;
		}
		s++;
	}
	if (cc == '\0' && *s == cc)
		return ((char *)s);
	else if (i != 0)
		return (p);
	return (NULL);
}
