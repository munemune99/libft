/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:55:50 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/07 17:15:18 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	int	i;
	char	*s1;
	const char	*s2;

	i = 0;
	s1 = dest;
	s2 = src;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char dest[] = "salut";
	char src[] = " gars";

	printf("%zu\n", ft_strlcpy(dest, src, 5));
	printf("%s", dest);
	return (0);
}*/
