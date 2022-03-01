/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:48:36 by yciftci           #+#    #+#             */
/*   Updated: 2022/02/22 13:34:13 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && n > 0)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
		n--;
	}
	if (n == 0 || s1[i] - s2[i] == 0)
		return (0);
	else if (s1[i] - s2[i] < 0)
		return (-1);
	else if (s1[i] - s2[i] > 0)
		return (1);
	else
		return (0);
}
