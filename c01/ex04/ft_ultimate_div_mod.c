/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:58:51 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/17 17:40:30 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	gecici_div;
	int	gecici_mod;

	gecici_div = *a / *b;
	gecici_mod = *a % *b;
	*a = gecici_div;
	*b = gecici_mod;
}
