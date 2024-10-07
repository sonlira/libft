/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldelo <abaldelo@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-07 13:43:22 by abaldelo          #+#    #+#             */
/*   Updated: 2024-10-07 13:43:22 by abaldelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
void	suma(unsigned int i,  char *c)
{
	(void) i;
	if (*c >= 'a' && *c <= 'z')
	{
		*c -= ('a' - 'A');
	}
}
*/

void	ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	unsigned int	i;
	
	i = 0;
	while (*(s+i))
	{
		f(i,s+i);
		i++;
	}
}
/*
int	main(void)
{
	char	*src = "hola";
	ft_striteri(src,suma);
	printf("\n%s",src);
	return (0);
}
*/