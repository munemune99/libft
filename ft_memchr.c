/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:37:54 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/17 13:13:14 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*pt;
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
		{
			pt = &str[i];
			return (pt);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "Salut gars";

	printf("%s\n", memchr(str, 'z', 6));
	printf("%s", ft_memchr(str, 'z', 6));
	return (0);
}*/
