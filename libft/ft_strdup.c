/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:20:51 by razasharuku       #+#    #+#             */
/*   Updated: 2023/02/08 19:54:15 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(char *src)
{
	char		*t;
	size_t		len;
	size_t		i;

	len = ft_strlen(src);
	t = malloc(sizeof(char) * (len + 1));
	if (t == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		t[i] = src[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}
