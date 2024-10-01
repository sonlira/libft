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

	i = 0;
	new_s = (char *) malloc(sizeof(char) * (len + 1));
	if (!new_s)
		return (NULL);
	while (start <= len && !s)
	{
		new_s[i++] = s[start++];
	}
	return (new_s);
}
