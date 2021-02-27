/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:07:26 by amota-br          #+#    #+#             */
/*   Updated: 2021/02/21 18:38:09 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_char_special(char c)
{
	if (c == '\v' || c == ' ' || c == '\t'
		|| c == '\f' || c == '\r' || c == '\n')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long long	nb;
	int			count;
	int			sign;

	nb = 0;
	count = 0;
	sign = 1;
	if (*str == '\0')
		return (0);
	while (ft_char_special(str[count]))
		count++;
	if (str[count] == '-')
		sign *= -1;
	if (str[count] == '+' || str[count] == '-')
		count++;
	while (ft_isdigit(str[count]))
	{
		nb = nb * 10 + (str[count] - '0');
		count++;
	}
	return (nb * sign);
}
