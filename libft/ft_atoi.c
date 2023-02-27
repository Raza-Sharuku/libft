/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:47:23 by sraza             #+#    #+#             */
/*   Updated: 2023/01/30 23:26:58 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	char	*ft_isspace(const char *str)
{
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\t' || *str == '\v' || *str == '\r')
		str++;
	return ((char *)str);
}

static	long	ft_max(const char *str)
{
	long	num;

	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		if (num > ((LONG_MAX - (*str - '0')) / 10))
		{
			num = LONG_MAX;
			break ;
		}
		num = num * 10 + (*str - '0');
		str++;
	}
	return ((int)num);
}

static	long	ft_min(const char *str)
{
	long	num;

	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		if (num < ((LONG_MIN + (*str - '0')) / 10))
		{
			num = LONG_MIN;
			break ;
		}
		num = num * 10 - (*str - '0');
		str++;
	}
	return ((int)num);
}

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;

	str = ft_isspace(str);
	sign = 1;
	num = 0;
	while (*str != '\0' && (*str == '+' || *str == '-'))
	{
		if ((*str == '+' || *str == '-')
			&& (*(str + 1) == '+' || *(str + 1) == '-'))
			return (0);
		else if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	if (sign == 1)
		num = ft_max((char *)str);
	if (sign == -1)
		num = ft_min((char *)str);
	return (num);
}
