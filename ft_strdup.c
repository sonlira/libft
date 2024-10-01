/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldelo <abaldelo@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-22 13:51:33 by abaldelo          #+#    #+#             */
/*   Updated: 2024-09-22 13:51:33 by abaldelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	long_s;

	long_s = ft_strlen(s);
	dest = (char *) malloc(long_s + 1);
	if (!dest)
	{
		return (NULL);
	}
	ft_memcpy(dest, s, long_s);
	return (dest);
}
