/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:35:00 by yciftci           #+#    #+#             */
/*   Updated: 2022/03/01 14:08:55 by yciftci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	yazdir(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	karsilastir(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*kova;

	i = 1;
	while (i <= argc)
	{
		j = 2;
		while (j <= argc - 1)
		{
			if (karsilastir(argv[j], argv[j - 1]) < 0)
			{
				kova = argv[j];
				argv[j] = argv[j - 1];
				argv[j - 1] = kova;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (++i < argc)
		yazdir(argv[i]);
}
