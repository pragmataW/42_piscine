/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 10:23:31 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/19 11:07:33 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
