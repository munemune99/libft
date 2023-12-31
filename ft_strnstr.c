/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:31:59 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/17 11:04:35 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	y;
	char	*pt;

	i = 0;
	y = 0;
	pt = (char *)s1;
	if (s2[i] == '\0')
		return (pt);
	if (s1[i] == '\0')
		return (NULL);
	while (i < n)
	{
		while (s1[i + y] == s2[y] && (s1[i + y] != '\0') && i + y < n)
		{
			y++;
			if (s2[y] == '\0')
				return (pt + i);
		}
		y = 0;
		i++;
	}
	return (NULL);
}
