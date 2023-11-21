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

/*char	*ft_nextword(char *s, char c, int i)
{
	if (i != 0 && s[i] != c)
		i++;
	while (s[i] == c)
		i++;
	return (&s[i]);
}*/

static void	ft_freemalloc(char **tab, int n)
{
	while (n >= 0)
	{
		free(tab[n]);
		n--;
	}
	free(tab);
}

static int	ft_strlength(char *s, char c)
{
	int	x;

	x = 0;
	while (s[x] == c)
		x++;
	while (s[x] != '\0' && s[x] != c)
	{
		x++;
	}
	return (x);
}

static int	count_words(char *s, char c)
{
	int	i;
	int	count;
	int	y;

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
	int			i;
	const int	j = count_words((char *)s, c);

	i = 0;
	tab = ft_calloc(sizeof(char *), (j + 1));
	if (!tab)
		return (NULL);
	while (i < j)
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

/*
int	main(void)
{
	char const	*str = "    Salut gars ca va ! ";
	int	i;
	char	**tab;
//	int	x;

	i = 0;
	tab = ft_split(str, ' ');
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		free (tab[i]);
		i++;
	}
	free (tab);
	return (0);
}
*/
