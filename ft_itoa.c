/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:33:34 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/13 11:24:55 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_is_negative(char *str, int n, int len)
{
	int	mod;

	while (len > 0)
	{
		mod = n % 10;
		n = n / 10;
		str[len] = (mod * -1) + '0';
		len--;
	}
	return (str);
}

char    *ft_is_positive (char *str, int n, int len)
{
        int     mod;

        while (n > 0)
        {
                mod = n % 10;
                n = n / 10;
                str[len] = mod + '0';
                len--;
        }
        return (str);
}


char	*ft_itoa(int n)
{
	char	*str;
	int	len;

	len = ft_intlen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	len--;
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		str = ft_is_negative(str, n, len);
	}
	if (n > 0)
		str = ft_is_positive(str, n, len);
	return (str);
}
/*
int	main(void)
{
	int	n;

	n = 2147483647;
	printf("%s\n", ft_itoa(-2147483647LL));
	return (0);
}*/
