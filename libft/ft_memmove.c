/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 12:39:58 by amota-br          #+#    #+#             */
/*   Updated: 2021/02/21 21:38:44 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*c_dest;
	unsigned char	*c_src;
	size_t			i;

	i = 0;
	c_dest = (unsigned char *)dest;
	c_src = (unsigned char *)src;
	if (c_dest == c_src)
		return (c_dest);
	if ((c_src < c_dest) && ((c_src + len) > c_dest))
		while (i++ < len)
			c_dest[len - i] = c_src[len - i];
	else if ((c_src > c_dest) && ((c_dest + len) > c_src))
	{
		while (i < len)
		{
			c_dest[i] = c_src[i];
			i++;
		}
	}
	else
		ft_memcpy(dest, src, len);
	return (dest);
}
