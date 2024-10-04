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
	char	*str;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen <= start)
		return (ft_strdup(""));
	if ((slen - start) < len)
		len = slen - start;
	str = (char *) malloc((len + 1) * 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, (s + start), (len + 1));
	return (str);
}
//#include <stdio.h>
/*int	main()
{
	char *s = "i just want this part #############";
	int	inicio = 5;
	char	*newstr = ft_substr(s,inicio,10);
	printf("%s",newstr);
	return (0);
}*/
