/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 00:04:09 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/19 11:25:13 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	sayac;

	sayac = 0;
	while ((src[sayac] != '\0') && (sayac < n))
	{
		dest[sayac] = src[sayac];
		sayac++;
	}
	while (sayac < n)
	{
		dest[sayac] = '\0';
		sayac++;
	}
	return (dest);
}
