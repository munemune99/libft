/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:24:10 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/17 16:04:07 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	unsigned int	i;
	size_t			y;

	i = 0;
	y = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	else if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	s2 = malloc (sizeof(char) * (len + 1));
	if (s2 == NULL)
		return (NULL);
	while (i < start)
		i++;
	while (y < len && s[i])
	{
		s2[y] = s[i];
		i++;
		y++;
	}
	s2[y] = '\0';
	return (s2);
}
