/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 13:54:24 by amota-br          #+#    #+#             */
/*   Updated: 2021/02/21 21:42:46 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	new_size;
	void	*new_pointer;

	new_size = nmemb * size;
	new_pointer = malloc(new_size);
	if (new_pointer == NULL)
		return (NULL);
	ft_bzero(new_pointer, new_size);
	return (new_pointer);
}
