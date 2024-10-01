/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldelo <abaldelo@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-27 16:11:57 by abaldelo          #+#    #+#             */
/*   Updated: 2024-09-27 16:11:57 by abaldelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	copy_str(size_t index, size_t total_size, char *dest, char const *src)
{
	while(index < total_size && *src != '\0')
	{
		dest[index] = *src;
		src++;
		index++;
	}
	return (index);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t total_size;
	size_t i;
	char	*n_str;

	i = 0;
	total_size = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	n_str = (char *) malloc(sizeof(char) * total_size);
	if (!n_str)
		return (NULL);
	i = copy_str(i,total_size,n_str,s1);
	i = copy_str(i,total_size,n_str,s2);
	return (n_str);
}
