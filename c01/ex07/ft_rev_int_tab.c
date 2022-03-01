/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:17:34 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/17 17:44:05 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	sayac;
	int	gecici;
	int	index;

	index = size - 1;
	sayac = 0;
	while (sayac < size / 2)
	{
		gecici = tab[sayac];
		tab[sayac] = tab[index - sayac];
		tab[index - sayac] = gecici;
		sayac++;
	}
}
