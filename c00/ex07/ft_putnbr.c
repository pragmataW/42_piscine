/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:00:13 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/15 13:21:00 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	yazdir(char harf)
{
	write(1, &harf, 1);
}

void	ft_putnbr(int sayi)
{
	if (sayi == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (sayi < 0)
	{
		yazdir('-');
		ft_putnbr(-sayi);
	}
	else if (sayi > 9)
	{
		ft_putnbr (sayi / 10);
		ft_putnbr (sayi % 10);
	}
	else
	{
		yazdir(sayi + 48);
	}
}
