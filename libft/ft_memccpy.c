/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 21:14:52 by amota-br          #+#    #+#             */
/*   Updated: 2021/02/21 21:16:32 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	char *c_dest;
	char *c_src;
	char c_cast;

	c_dest = (char *)dest;
	c_src = (char *)src;
	c_cast = (char)c;
	while ((*c_src != c_cast) && (len > 0))
	{
		*c_dest = *c_src;
		c_dest++;
		c_src++;
		len--;
	}
	if (*c_src == c_cast)
	{
		*c_dest = *c_src;
		c_dest++;
		return ((void *)c_dest);
	}
	return (NULL);
}
