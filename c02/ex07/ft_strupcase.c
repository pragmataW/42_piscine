/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 09:41:37 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/19 09:50:03 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	sayac;

	sayac = 0;
	while (str[sayac] != '\0')
	{
		if ((str[sayac] >= 'a') && (str[sayac] <= 'z'))
			str[sayac] -= 'a' - 'A';
		sayac++;
	}
	return (str);
}
