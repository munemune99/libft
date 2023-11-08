/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:41:12 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/08 13:36:19 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			x = s1[i] - s2[i];
			return (x);
		}
		i++;
	}
	return (x);
}
/*
int	main(void)
{
	const char a[] = ".anlt";
	const char b[] = "salnt";

	printf("%d\n", strncmp(a, b, 0));
	printf("%d", ft_strncmp(a, b, 0));
	return (0);
}*/
