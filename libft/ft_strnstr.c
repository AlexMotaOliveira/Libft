/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 12:23:48 by amota-br          #+#    #+#             */
/*   Updated: 2021/02/21 12:26:29 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = ft_strlen(little);
	if (*little == '\0')
		return ((char *)big);
	while ((*big != '\0') && (i < len))
	{
		if ((ft_strncmp(big, little, count) == 0) && (i + count <= len))
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}
