/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 11:40:01 by amota-br          #+#    #+#             */
/*   Updated: 2021/02/21 20:37:11 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t count;

	count = ft_strlen(dest);
	if (size <= count)
		return (size + ft_strlen(src));
	while (*src && count < size - 1)
		*(dest + count++) = *src++;
	*(dest + count) = '\0';
	return (count + ft_strlen(src));
}
