/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldelo <abaldelo@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-27 15:36:52 by abaldelo          #+#    #+#             */
/*   Updated: 2024-09-27 15:36:52 by abaldelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;
	size_t	total_size;

	i = 0;
	total_size = len - start;
	new_s = (char *) ft_calloc(total_size,sizeof(char));
	if (!new_s)
		return (NULL);
	while (start < len && !s)
	{
		new_s[i] = s[start];
		start++;
		i++;
	}
	return (new_s);
}
