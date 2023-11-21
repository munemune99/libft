/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:52:52 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/17 14:55:40 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*s1;
	const unsigned char	*s2;

	s1 = dest;
	s2 = src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "      gars";
	char	src[] = "salut";

	//ft_memcpy(dest, src, 5);
	printf("%s",memcpy(dest, src, 5));
	return (0);
}*/
