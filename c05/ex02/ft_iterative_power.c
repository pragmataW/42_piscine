/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:44:03 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/27 14:19:10 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	sonuc;

	sonuc = 1;
	i = 0;
	if (power >= 0)
	{		
		while (i < power)
		{
			sonuc = sonuc * nb;
			i++;
		}
		return (sonuc);
	}
	else
		return (0);
}
