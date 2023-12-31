/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:37:07 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/17 14:47:27 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_stars(unsigned int i, char *s)
{
	s[i] = '*';
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	size_t			n;

	i = 0;
	n = ft_strlen(s);
	while (s[i] != '\0' && i < n)
	{
		f(i, &s[i]);
		i++;
	}
}
