/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:42:58 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/08 10:39:40 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (i < n)
		i++;
	while (src[y] != '\0')
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	return (i);
}
/*
int	main(void)
{
	char dest[] = "une pas deux";
	//printf("%zu", strlcat(dest, " gars", 5));
	printf("%zu",ft_strlcat(dest, " gars", 5));
	return (0);
}*/
