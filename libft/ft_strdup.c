/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 13:45:59 by amota-br          #+#    #+#             */
/*   Updated: 2021/02/21 23:04:38 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		len;
	char	*src_dest;
	int		i;

	len = 0;
	while (src[len] != '\0')
		len++;
	src_dest = (char*)ft_calloc((len + 1), sizeof(char));
	if (src_dest == 0)
		return (0);
	i = -1;
	while (i++ < len - 1)
		src_dest[i] = src[i];
	src_dest[i] = '\0';
	return (src_dest);
}
