/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldelo <abaldelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:40:31 by abaldelo          #+#    #+#             */
/*   Updated: 2024/09/20 16:04:29 by abaldelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*small || !*big)
		return ((char *)big);
	while (big[i] != '\0' && i < size)
	{
		j = 0;
		while (big[i + j] == small[j])
		{
			j++;
			if (small[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
