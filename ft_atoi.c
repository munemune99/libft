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

static int	ft_whichsign(char *s, size_t i)
{
	int	sign;

	sign = 1;
	if (s[i] == '-')
		sign *= -1;
	return (sign);
}

static int	ft_skip(char *s, size_t i)
{
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
		i++;
	return (i);
}

static int	ft_overflow(long long result, long long resultcpy, int var)
{
	if (resultcpy > result && var < 0)
		return (0);
	if (resultcpy > result && var > 0)
		return (-1);
	return (1);
}

static int	ft_resultcalc(long long result, long long resultcpy,
	int sign, char c)
{
	resultcpy = result;
	result = result * 10 + (c - 48);
	if (ft_overflow(result, resultcpy, sign) == -1)
		return (-1);
	if (ft_overflow(result, resultcpy, sign) == 0)
		return (0);
	return (result);
}

int	ft_atoi(const char *s)
{
	long long int	result;
	long long int	resultcpy;
	size_t			i;
	int				sign;

	sign = 1;
	result = 0;
	resultcpy = 0;
	i = ft_skip((char *)s, 0);
	if (s[i] == '+' || s[i] == '-')
	{
		sign = ft_whichsign((char *)s, (size_t) i);
		i++;
	}
	if (ft_isdigit(s[i]) != 1)
		return (0);
	while (s[i] >= 48 && s[i] <= 57)
	{
		result = ft_resultcalc(result, resultcpy, sign, s[i]);
		i++;
	}
	return (result * sign);
}
