/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 17:53:47 by amota-br          #+#    #+#             */
/*   Updated: 2021/02/21 21:18:57 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char *csrc;
	char *cdest;

	if (!(dest) && !(src) && (len > 0))
		return (NULL);
	csrc = (char *)src;
	cdest = (char *)dest;
	while (len--)
		cdest[len] = csrc[len];
	return (cdest);
}
