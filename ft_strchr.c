/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:59:06 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/17 15:00:49 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*pt;
	size_t	i;

	i = 0;
	while (c > 127)
		c = c - 128;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			pt = (char *)&s[i];
			return (pt);
		}
		else
			i++;
	}
	if (c == '\0')
	{
		pt = (char *)&s[i];
		return (pt);
	}
	return (NULL);
}
