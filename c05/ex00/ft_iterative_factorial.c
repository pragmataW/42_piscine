/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:28:42 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/26 17:49:03 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	sonuc;

	sonuc = 1;
	while (nb > 0)
	{
		sonuc = sonuc * nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (sonuc);
}
