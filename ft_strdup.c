/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:26:09 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/10 10:20:30 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	int	i;
	size_t	len;
	
	i = 0;
	len = ft_strlen(s);
	s2 = malloc (sizeof(char) * len);
	if (s2 == NULL)
		return (0);
	while (i < len)
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int	main(void)
{
	const char *s = "Salut gars";
	printf("%s", ft_strdup(s));
	printf("%s", strdup(s));
	return (0);
}*/
