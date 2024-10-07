/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldelo <abaldelo@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-07 10:23:10 by abaldelo          #+#    #+#             */
/*   Updated: 2024-10-07 10:23:10 by abaldelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

char	suma(unsigned int i,  char c)
{
	(void) i;
	if (c >= 'a' && c <= 'z')
	{
		c -= ('a' - 'A');
	}
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*src;
	
	i = 0;
	src = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!src)
		return (NULL);
	while (s[i])
	{
		src[i] = f(i,s[i]);
		i++;
	}
	src[i] = '\0';
	return (src);
}

/*int	main(void)
{
	char	*src = "hola";
	printf("%s",ft_strmapi(src,suma));
	printf("\n%s",src);
	return (0);
}*/