/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:19:14 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/08 12:40:10 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*pt;
	int	i;

	i = ft_strlen(s);
	while (i != 0)
	{
		if (s[i] == c)
		{
			pt = (char *)&s[i];
			return (pt);
		}
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	str[] = "salut gars";
	printf("%s\n", ft_strrchr(str, 'z'));
	printf("%s", strrchr(str, 'z'));
	return (0);
}*/
