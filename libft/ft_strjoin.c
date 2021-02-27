/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:55:22 by amota-br          #+#    #+#             */
/*   Updated: 2021/02/21 22:40:24 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		count;
	int		final_s1;

	if (!s1 || !s2)
		return (NULL);
	new_str = ft_calloc(((ft_strlen(s1)) + (ft_strlen(s2)) + 1), sizeof(char));
	if (new_str == NULL)
		return (NULL);
	count = 0;
	while (s1[count])
	{
		new_str[count] = s1[count];
		count++;
	}
	final_s1 = count;
	count = 0;
	while (s2[count])
	{
		new_str[final_s1 + count] = s2[count];
		count++;
	}
	new_str[final_s1 + count] = '\0';
	return (new_str);
}
