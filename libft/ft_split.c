/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:00:26 by razasharuku       #+#    #+#             */
/*   Updated: 2023/02/09 22:50:31 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	int	check_sep(char s, char c);
static	int	count_str(char *str, char charset);
static	char	*add_str(char *str, char charset);

static	int	check_sep(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static	int	count_str(char *str, char charset)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && check_sep(*str, charset) == 1)
			str++;
		if (*str != '\0')
			count++;
		while (*str != '\0' && check_sep(*str, charset) == 0)
			str++;
	}
	return (count);
}

static	char	*add_str(char *str, char charset)
{
	int		i;
	int		add_count;
	char	*add;

	i = 0;
	add_count = 0;
	while (str[add_count] && check_sep(str[add_count], charset) == 0)
		add_count ++;
	add = malloc(sizeof(char) * (add_count + 1));
	if (add == NULL)
		return (NULL);
	while (i < add_count)
	{
		add[i] = str[i];
		i++;
	}
	add[i] = '\0';
	return (add);
}

static	void	*ft_free(char **result)
{
	size_t	i;

	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		result[i] = NULL;
		i++;
	}
	free(result);
	result[i] = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**result;

	i = 0;
	if (s == NULL)
		return (NULL);
	result = malloc(sizeof(char *) * (count_str((char *)s, c) + 1));
	if (result == NULL)
		return (NULL);
	while (*s != '\0')
	{
		while (*s != '\0' && check_sep(*s, c) == 1)
			s++;
		if (*s != '\0')
		{
			result[i] = add_str((char *)s, c);
			if (result[i++] == NULL)
				return (ft_free(result));
		}
		while (*s != '\0' && check_sep(*s, c) == 0)
			s++;
	}
	result[i] = NULL;
	return (result);
}
