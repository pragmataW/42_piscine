/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:47:43 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/17 17:44:22 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	gecici;

	i = 0;
	while (i < size)
	{
		j = 1;
		while (j < size - i)
		{
			if (tab[j - 1] > tab[j])
			{
				gecici = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = gecici;
			}
			j++;
		}
		i++;
	}
}
