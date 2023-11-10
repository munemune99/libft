/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:06:32 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/10 15:36:53 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_in_s1(char const c, char const *set)
{
	int	y;

	y = 0;
	while (set[y] != '\0')
	{
		if (c == set[y])
			return (1);
		else
			y++;
	}
	return (0);
}

int	ft_len(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s1[i] != '\0')
	{
		if (ft_is_in_s1(s1[i], set) == 0)
			len++;
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;
	char	*str;
	int	i;
	int	y;

	i = 0;
	y = 0;
	len = ft_len(s1, set);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (ft_is_in_s1(s1[i], set) == 0)
		{
			str[y] = s1[i];
			y++;
		}
		i++;
	}
	str[y] = '\0';
	return (str);
}

int	main(void)
{
	char	*s1 = "Saluet";
	char	*set = "te";

	printf("%s", ft_strtrim(s1, set));
	return (0);
}
