/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:57:23 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/19 02:49:54 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	sayac;

	sayac = 0;
	while (str[sayac] != '\0')
	{
		sayac++;
	}
	return (sayac);
}

int main()
{
	char dizi[] = "yusuf";

	printf("%d", ft_strlen(dizi));
}
