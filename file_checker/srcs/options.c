/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <exam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 10:32:46 by exam              #+#    #+#             */
/*   Updated: 2018/03/29 14:07:07 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		power(int power)
{
	int i;

	i = 1;
	if (power == 0)
		return (1);
	while (power--)
		i *= 2;
	return (i);
}

int		ft_occ(char *s, char c)
{
	int x;

	x = 0;
	while (s[x])
	{
		if (s[x] == c)
			return (x);
		x++;
	}
	if (s[x] == c)
		return (x);
	return (-1);
}

void	ft_print_bits(unsigned int n, int size)
{
	unsigned int oct;

	oct = n;
	if (size)
	{
		ft_print_bits(oct >> 1, size - 1);
		if ((size - 1) % 8 == 0 && size - 1 != 0)
			write(1, " ", 1);
		if (oct & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
}

int		options(char *s, int *oct)
{
	int x;
	int ret;

	x = 1;
	ret = 0;
	if (s[0] != '-')
		return (0);
	while (s[x])
	{
		ret = ft_occ("abcdefghijklmnopqrstuvwxyz", s[x]);
		if (ret == -1)
			return (-1);
		ret = power(ret);
		*oct |= ret;
		x++;
	}
	return (*oct);
}
