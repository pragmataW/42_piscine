/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:47:28 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/21 14:48:58 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	sayac;

	sayac = 0;
	while (str[sayac] != '\0')
	{
		if ((str[sayac] >= 'A') && (str[sayac] <= 'Z'))
			str[sayac] += 'a' - 'A';
		sayac++;
	}
	return (str);
}

char	*ft_strcapitalize(char	*str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	ft_strlowcase(str);
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			if (b == 1)
			{
				str[a] -= 'a' - 'A';
				b = 0;
			}
		}
		else if (str[a] >= '0' && str[a] <= '9')
		{
			b = 0;
		}
		else
			b = 1;
		a++;
	}
	return (str);
}
