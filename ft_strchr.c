/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:59:06 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/08 12:14:28 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*pt;
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			pt = (char *)&s[i];
			return (pt);
		}
		else
			i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char str[] = "une pas deux";

	printf("%s\n",ft_strchr(str, 'e'));
	printf("%s",strchr(str, 'e'));
	return (0);
}*/
