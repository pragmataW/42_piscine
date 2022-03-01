/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 08:57:36 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/19 09:08:41 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char	*str)
{
	int	sayac;

	sayac = 0;
	while (str[sayac] != '\0')
	{
		if ((str[sayac] < 'a') || (str[sayac] > 'z'))
			return (0);
		sayac++;
	}
	return (1);
}
