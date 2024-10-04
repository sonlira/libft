/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldelo <abaldelo@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-04 17:47:45 by abaldelo          #+#    #+#             */
/*   Updated: 2024-10-04 17:47:45 by abaldelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*int	num_digits(int n)
{
	return (0);
}*/

char	*ft_itoa(int n)
{
	int	num;
	int	len;

	num = n;
	len = 1;
	printf("n %d", num);
	if (num < 0)
	{
		num = -num;
		len++;
	}
	while (num >= 10)
	{
		num = num / 10;
		printf("\n%d num %d", len, num);
		len++;
	}
	printf("\n len %d", len);
	return (0);
}

int	main()
{
	size_t n;
	n = -3;
	printf("%lu \n", n);
	ft_itoa(-1234);
	return (0);
}