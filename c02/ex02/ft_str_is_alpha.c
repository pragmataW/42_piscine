/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 01:48:37 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/19 08:34:16 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	sayac;

	sayac = 0;
	while (str[sayac] != '\0')
	{
		sayac++;
	}
	return (sayac);
}

int	ft_str_is_alpha(char *str)
{
	int	sayac;
	int	i;
	int	uzunluk;

	uzunluk = ft_strlen(str);
	i = 0;
	sayac = 0;
	while (str [i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			sayac++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			sayac++;
		i++;
	}
	if (sayac == uzunluk)
		return (1);
	return (0);
}
