/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 11:17:40 by amota-br          #+#    #+#             */
/*   Updated: 2021/02/21 20:47:22 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *s_final;

	s_final = ft_strchr(s, '\0');
	while (*s_final != (char)c)
		if (s_final-- == s)
			return (NULL);
	return (char *)s_final;
}
