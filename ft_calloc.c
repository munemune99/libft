/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:25:06 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/15 15:48:09 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if ((n == 0) || (size == 0))
		return (malloc (0));
	if (SIZE_MAX / n < size)
		return (NULL);
	str = malloc(size * n);
	if (str == NULL)
		return (0);
	while (i < n * size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
