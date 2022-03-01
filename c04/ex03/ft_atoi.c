/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:50:18 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/26 14:59:07 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char	*str)
{
	int	i;
	int	isaret;
	int	sonuc;

	i = 0;
	sonuc = 0;
	isaret = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			isaret *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sonuc = (str[i] - '0') + (sonuc * 10);
		i++;
	}
	return (sonuc * isaret);
}

int main()
{
	char str[] = "   +--+--342434yusuf2434";

	printf("%d", ft_atoi(str));
}
