/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 10:50:58 by sraza             #+#    #+#             */
/*   Updated: 2023/02/05 14:41:28 by sraza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int	ft_size(int n)
{
	int		malloc_size;

	malloc_size = 0;
	if (n < 0)
		malloc_size = 1;
	while (n != 0)
	{
		n = n / 10;
		malloc_size++;
		if (n == 0)
			break ;
	}
	return (malloc_size);
}

static	void	ft_putnbr(unsigned int n, int i, char *str)
{
	if (n == 0)
		str[0] = '0';
	if (n <= 9 && n >= 0)
		str[i] = n + '0';
	else if (n > 0)
	{
		ft_putnbr(n / 10, --i, str);
		i++;
		str[i] = n % 10 + '0';
		n = n / 10;
	}
}

static	unsigned int	ft_abs(int n)
{
	if (n < 0)
		return (n * (-1));
	else
		return (n);
}

char	*ft_itoa(int n)
{
	int		malloc_size;
	char	*itoa;
	int		i;

	malloc_size = ft_size(n);
	if (n == 0)
		malloc_size = 1;
	itoa = malloc(sizeof(char) * (malloc_size + 1));
	if (itoa == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		itoa[i] = '-';
		i++;
	}
	ft_putnbr(ft_abs(n), malloc_size - 1, itoa);
	*(itoa + malloc_size) = '\0';
	return (itoa);
}
