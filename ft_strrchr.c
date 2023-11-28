/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:19:14 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/17 15:00:25 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*pt;
	size_t		i;

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
		if (i == 0)
			return (NULL);
		i--;
	}
	return (NULL);
}
