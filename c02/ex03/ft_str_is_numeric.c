/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 08:03:45 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/19 08:35:15 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

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

int	ft_str_is_numeric(char	*str)
{
	int	sayac;
	int	uzunluk;
	int	i;

	i = 0;
	uzunluk = ft_strlen(str);
	sayac = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			sayac++;
		}
		i++;
	}
	if (sayac == uzunluk)
		return (1);
	else
		return (0);
}
