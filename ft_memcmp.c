/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:23:19 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/08 16:45:11 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;
	int	x;
	char	*a;
	char	*b;

	a = (char *)s1;
	b = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
		{
			x = a[i] - b[i];
			return (x);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "Salut gars";
	char	str1[] = "Salut gars";

	printf("%d\n", memcmp(str, str1, 12));
	printf("%d", ft_memcmp(str, str1, 12));
	return (0);
}*/
