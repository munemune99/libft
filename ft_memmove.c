/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:22:59 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/13 15:47:03 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;

	s1 = (char*)dest;
	s2 = (char*)source;
	i = 0;
	if (s1 == s2 || n == 0)
		return (s1);
	if (s1 > s2 && (s1 - s2) < (int)n)
	{
		i = n-1;
		while (i > 0)
		{
			s1[i] = s2[i];
			i--;
		}
	}
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
/*
int	main(void)
{
	char	str[9] = "aabbccdd";
	printf( "The string: %s\n", str );
	memmove(str + 1 ,str ,3 );
  	printf( "New string: %s\n", str );
}*/
