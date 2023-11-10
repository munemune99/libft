/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:24:10 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/10 10:49:39 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	int	i;
	int	y;

	i = 0;
	y = 0;
	s2 = malloc (sizeof(char) * len);
	if (s2 == NULL)
		return (NULL);
	while (i < start)
		i++;
	while (y < len)
	{
		s2[y] = s[i];
		i++;
		y++;
	}
	s2[y] = '\0';
	return (s2);
}

