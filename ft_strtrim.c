/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:06:32 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/17 15:49:12 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
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
	return (n);
}

int	ft_len(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s1[i] != '\0')
	{
		while (ft_is_in_s1(s1[i], set) == 1)
			i++;
		while (ft_is_in_s1(s1[i], set) == 0)
		{
			i++;
			len++;
		}
		while (ft_is_in_s1(s1[i], set) == 1)
			i++;
	}
	return (len);
}*/

static size_t	ft_until(char const *s1, size_t n, char const *set)
{
	int	y;

	y = 0;
	n = n - 1;
	while (n != 0)
	{
		while (s1[n] != set[y])
		{
			y++;
			if (set[y] == '\0')
				return (n);
		}
		y = 0;
		n--;
	}
	return (n);
}

static int	ft_when(char const *s1, char const *set)
{
	unsigned int	n;
	unsigned int	y;

	y = 0;
	n = 0;
	while (s1[n] != '\0')
	{
		while (s1[n] != set[y])
		{
			y++;
			if (set[y] == '\0')
				return (n);
		}
		y = 0;
		n++;
	}
	return (n);
}

static char	*ft_empty(int i)
{
	char	*str;

	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		i;
	size_t				maxlen;
	char				*str;

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_substr(s1, 0, 0));
	if (set[0] == '\0')
		return (ft_substr(s1, 0, ft_strlen(s1)));
	i = ft_when(s1, set);
	maxlen = ft_strlen(s1);
	maxlen = ft_until(s1, maxlen, set) + 1;
	if (i == ft_strlen(s1))
		return (ft_empty(0));
	str = ft_substr(s1, i, ((unsigned int)maxlen - i));
	return (str);
}
/*
int	main(void)
{
   char	*s1 = "grgrg";
   char	*set = "";

   printf("%s", ft_strtrim("   xxx   xxx", " x"));
   return (0);
}*/
