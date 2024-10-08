/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldelo <abaldelo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:15:24 by abaldelo          #+#    #+#             */
/*   Updated: 2024/10/08 19:57:57 by abaldelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	is_alnum;

	is_alnum = 0;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		is_alnum = 1;
	}
	else
	{
		if (c >= '0' && c <= '9')
		{
			is_alnum = 1;
		}
	}
	return (is_alnum);
}
