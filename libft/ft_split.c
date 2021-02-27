/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 16:43:12 by amota-br          #+#    #+#             */
/*   Updated: 2021/02/21 23:30:04 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len_word(char const *s, char c)
{
	size_t		count;
	size_t		i;

	if (!s)
		return (0);
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && (s[i] != '\0'))
			i++;
		if ((s[i] != c) && (s[i] != '\0'))
		{
			count++;
			while ((s[i] != c) && (s[i] != '\0'))
				i++;
		}
	}
	return (count);
}

static size_t	ft_len(char const *s, char c)
{
	size_t		len;

	len = 0;
	while ((s[len] != '\0') && (s[len] != c))
		len++;
	return (len);
}

static char		**free_memory(char **str_array)
{
	size_t	i;

	i = 0;
	while (str_array[i])
	{
		free(str_array[i]);
		i++;
	}
	free(str_array);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char		**str_array;
	size_t		sub_length;
	size_t		count_new_s;
	size_t		count_s;
	size_t		i;

	count_s = ft_len_word(s, c);
	if (!(str_array = (char**)ft_calloc((count_s + 1), sizeof(char*))) || (!s))
		return (NULL);
	i = 0;
	count_new_s = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			sub_length = ft_len(&s[i], c);
			if (!(str_array[count_new_s] = ft_substr(s, i, sub_length)))
				return (free_memory(str_array));
			count_new_s++;
			i += sub_length - 1;
		}
		i++;
	}
	str_array[count_new_s] = NULL;
	return (str_array);
}
