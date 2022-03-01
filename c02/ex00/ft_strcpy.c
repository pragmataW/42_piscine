/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:13:26 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/21 15:27:42 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	sayac;

	sayac = 0;
	while (src[sayac] != '\0')
	{
		dest[sayac] = src[sayac];
		sayac++;
	}
	dest[sayac] = '\0';
	return (dest);
}
