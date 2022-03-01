/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:12:12 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/15 13:18:02 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	yazdir(char harf)
{
	write(1, &harf, 1);
}

void	ft_print_comb2(void)
{
	int	sol;
	int	sag;

	sol = 0;
	sag = 1;
	while (sol <= 98)
	{
		sag = sol + 1;
		while (sag <= 99)
		{
			yazdir((sol / 10) + '0');
			yazdir((sol % 10) + '0');
			write(1, " ", 1);
			yazdir((sag / 10) + '0');
			yazdir((sag % 10) + '0');
			if (sol != 98 || sag != 99)
			{
				write(1, ", ", 2);
			}
			sag++;
		}
		sol++;
	}
}
