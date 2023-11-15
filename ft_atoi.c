/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:05:02 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/13 16:41:06 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	i;
	int	result;
	int	var;

	i = 0;
	result = 0;
	var = 1;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
		i++;
	if (s[i] == '-')
	{
		var *= -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (s[i] >= 48 && s[i] <= 57)
	{
		result = result * 10;
		result = result + (s[i] - 48);
		i++;
	}
	return (result * var);
}
/*
int	main(void)
{
	char	*s = "546";

	printf("%d\n", ft_atoi(s));
	printf("%d", atoi(s));
	return (0);
}*/
