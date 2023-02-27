/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:27:37 by razasharuku       #+#    #+#             */
/*   Updated: 2023/02/06 10:02:40 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_begin(const char *s, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(set);
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s[i] == set[j])
				break ;
			j++;
		}
		if (j == (len) && s[i] != set[j])
			break ;
		i++;
	}
	return (i);
}

static	size_t	ft_end(const char *s, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	str_len;

	str_len = ft_strlen(s);
	len = ft_strlen(set);
	i = 0;
	while (i < str_len)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s[str_len - 1 - i] == set[j])
				break ;
			j++;
		}
		if ((j == len) && s[str_len - 1 - i] != set[j])
			break ;
		i++;
	}
	return (i);
}

static	char	*ft_trimalloc(char *trim, size_t head,
					size_t tail, size_t str_len)
{
	if (str_len < head + tail)
		trim = malloc(sizeof(char) * (1));
	else
		trim = malloc(sizeof(char) * (str_len - (head + tail) + 1));
	return (&*trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	head;
	size_t	tail;
	size_t	str_len;
	char	*trim;
	size_t	i;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	str_len = ft_strlen(s1);
	head = ft_begin(s1, set);
	tail = ft_end(s1, set);
	trim = NULL;
	trim = ft_trimalloc(trim, head, tail, str_len);
	if (trim == NULL)
		return (NULL);
	i = 0;
	while (head + i < str_len - tail)
	{
		trim[i] = s1[head + i];
		i++;
	}
	trim[i] = '\0';
	return (trim);
}
