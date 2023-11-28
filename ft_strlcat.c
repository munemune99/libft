/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:42:58 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/15 15:02:16 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	y;
	size_t	len;

	i = ft_strlen(dest);
	len = i;
	y = 0;
	if ((n == 0) || n < len)
		return (ft_strlen(src) + n);
	while (src[y] && i < (n - 1))
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (len + ft_strlen(src));
}
