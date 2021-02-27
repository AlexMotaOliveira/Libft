/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 15:09:36 by amota-br          #+#    #+#             */
/*   Updated: 2021/02/21 22:42:34 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	final;
	size_t	len;

	if (!s || !set)
		return (0);
	while ((*s) && (ft_strchr(set, *s)))
		s++;
	final = ft_strlen(s);
	while ((final) && (ft_strchr(set, s[final])))
		final--;
	len = final + 1;
	return (ft_substr(s, 0, len));
}
