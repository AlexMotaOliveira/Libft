/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 15:15:08 by amota-br          #+#    #+#             */
/*   Updated: 2021/02/21 22:56:58 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isnegative(int number)
{
	if (number < 0)
		return (1);
	return (0);
}

static int	ft_len_digit(unsigned int number)
{
	size_t digits;

	if (number == 0)
		return (1);
	digits = 0;
	while (number >= 1)
	{
		number /= 10;
		digits++;
	}
	return (digits);
}

char		*ft_itoa(int n)
{
	char			*string;
	unsigned int	neg;
	unsigned int	number;
	unsigned int	digits;

	if ((neg = ft_isnegative(n)))
		number = -n;
	else
		number = n;
	digits = ft_len_digit(number);
	if (!(string = (char *)ft_calloc((digits + neg + 1), sizeof(char))))
		return (NULL);
	if (neg == 1)
		string[0] = '-';
	string[digits + neg] = '\0';
	while (digits > 0)
	{
		string[(digits - 1) + neg] = (number % 10) + '0';
		number /= 10;
		digits--;
	}
	return (string);
}
