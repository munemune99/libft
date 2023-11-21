/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:50:11 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/17 10:49:35 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	y;
	char	*str;

	i = 0;
	y = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = malloc (sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (0);
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	while (y < len2 + 1)
	{
		str[i] = s2[y];
		i++;
		y++;
	}
	return (str);
}
/*
int	main(void)
{
	char const *s1 = "salut ";
	char const *s2 = "gars !";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}*/
