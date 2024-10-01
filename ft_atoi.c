/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldelo <abaldelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:52:12 by abaldelo          #+#    #+#             */
/*   Updated: 2024/09/20 15:11:12 by abaldelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	index;
	int	negative;
	int	number;

	index = 0;
	negative = 0;
	number = 0;
	while (str[index] == 32 || (str[index] >= 9 && str[index] <= 13))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			negative = 1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		number = number * 10 + (str[index] - '0');
		index++;
	}
	if (negative)
		number = -number;
	return (number);
}
