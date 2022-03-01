/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:18:06 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/21 18:28:56 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	yazdir(char a)
{
	write(1, &a, 1);
}

int	is_printable(char a)
{
	if (a >= 32 && a <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (is_printable (str[i]) == 1)
			yazdir(str[i]);
		else
		{
			yazdir('\\');
			yazdir("0123456789ABCDEF"[str[i] / 16]);
			yazdir("0123456789ABCDEF"[str[i] % 16]);
		}
		i++;
	}
}
