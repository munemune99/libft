/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:22:05 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/17 15:47:17 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_freemalloc(char **tab, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static size_t	ft_strlength(char *s, char c)
{
	size_t	x;

	x = 0;
	while (s[x] == c)
		x++;
	while (s[x] != '\0' && s[x] != c)
	{
		x++;
	}
	return (x);
}

static size_t	count_words(char *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	y;

	i = 0;
	count = 0;
	y = 1;
	while (s[i] && s[i] == c)
	{
		i++;
		y++;
		if (s[i] == '\0')
			return (0);
	}
	while (s[i] != '\0')
	{
		if ((s[y] == c || s[y] == '\0') && s[i] != c)
			count++;
		i++;
		y++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**tab;
	size_t		i;
	size_t		j;

	i = 0;
	if (!s)
		return (NULL);
	j = count_words((char *)s, c);
	tab = ft_calloc(sizeof(char *), (j + 1));
	if (!tab)
		return (NULL);
	while ((size_t)i < j)
	{
		while (*s == c)
			s++;
		tab[i] = ft_substr(s, 0, ft_strlength((char *)s, c));
		if (!tab[i])
		{
			ft_freemalloc(tab, i);
			return (NULL);
		}
		s += ft_strlen(tab[i]);
		i++;
	}
	return (tab);
}
