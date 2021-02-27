/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 23:58:59 by amota-br          #+#    #+#             */
/*   Updated: 2021/02/21 00:11:19 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	unsigned char	*s_src;
	unsigned char	c_char;

	s_src = (unsigned char*)s;
	c_char = (unsigned char)c;
	while (len > 0)
	{
		if (*s_src == c_char)
			return ((void *)s_src);
		s_src++;
		len--;
	}
	return (NULL);
}
