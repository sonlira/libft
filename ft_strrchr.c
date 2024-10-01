/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldelo <abaldelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:05:06 by abaldelo          #+#    #+#             */
/*   Updated: 2024/09/21 16:23:55 by abaldelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	longer;

	longer = ft_strlen(s);
	if ((char)c == '\0')
		return (s + longer);
	while (longer--)
	{
		if (s[longer] == (char)c)
			return (s + longer);
	}
	return (NULL);
}
