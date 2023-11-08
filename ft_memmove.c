/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:22:59 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/07 17:14:03 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t n)
{
	unsigned char	*s1;
	const unsigned char	*s2;
	const unsigned char	*temp;
	int	i;

	s1 = dest;
	s2 = source;
	temp = s2;
	i = 0;
	while(i < n)
	{
		s1[i] = temp[i];
		i++;
	}
	return (s1);
}

int	main(void)
{
	char	str[9] = "aabbccdd";
	printf( "The string: %s\n", str );
	memmove(str + 1 ,str ,3 );
  	printf( "New string: %s\n", str );
}
