/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:56:34 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/27 10:40:22 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0)
	{
		if (nb == 0)
			return (1);
		else
			return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (0);
}
