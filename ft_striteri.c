/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:37:07 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/14 13:49:55 by jfrancoi         ###   ########.fr       */
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
	size_t	n;

	i = 0;
	n = ft_strlen(s);
	while (s[i] != '\0' && i < (unsigned int)n)
	{
		f(i, s);
		i++;
	}
}
/*
int	main(int argc, char **argv)
{
	ft_striteri("SALUT GARS !", c_to_star);
	return (0);
}*/
