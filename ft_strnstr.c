/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:31:59 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/08 17:37:15 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	y;
	char	*pt;

	i = 0;
	y = 0;
	pt = (char *)s1;
	if (s2 == NULL)
		return (pt);
	while (i < n)
	{
		while (s1[i] == s2[y])
		{
			i++;
			y++;
			if (s2[y] == '\0')
			{

		}



}

int	main(void)
{
	char	s1[] = "Salut";
	char	s2[] = "ap";
	char	*pt;

//	printf("%s", ft_strnstr(s1, s2, 2));
	pt = strnstr(s1, s2, 5);
	printf("%s", pt);
	return (0);	
}
