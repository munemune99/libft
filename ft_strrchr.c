/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:19:14 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/13 15:22:20 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strrchr(const char *s, int c)
{
	char	*pt;
	int	i;
	while (c > 127)
		c -= 128;
	i = ft_strlen(s);
	while (i >= 0)
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
