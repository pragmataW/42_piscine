/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 09:10:15 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/19 09:16:31 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	sayac;

	sayac = 0;
	while (str[sayac] != '\0')
	{
		if ((str[sayac] < 'A') || (str[sayac] > 'Z'))
			return (0);
		sayac++;
	}
	return (1);
}
