/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 15:04:27 by mmanley           #+#    #+#             */
/*   Updated: 2018/05/12 16:21:56 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testeur.h"
/*
void		partitions(int av, char **ac, int nb)
{
	static char		*f[7]()=\
	{ft_print, lst_ch, mems, nbrs, put, srcs, strs};
}*/

int			*test_pars(int av, char **ac, char **tab_chr, int x)
{
	int		*tab_int;
	int		i;
	int		j;

	i = 0;
	if (!(tab_int = ft_tabint_init(-1, 6)))
		return (NULL);
	while (x < av)
	{
		j = 0;
		while (tab_chr[j])
		{
			if (ft_strcmp(tab_chr[j], ac[x]) == 0)
				break;
			j++;
		}
		if (ft_int_occ(tab_int, j, 6) == -1)
		{
			tab_int[i] = j;
			i++;
		}
		x++;
	}
	return (tab_int);
}

int			main(int av, char **ac)
{
	char	**tab_chr;
	int		*tab_int;

	if (av <= 1)
	{
		ft_printf("Usage: Input tests\n");
		return (0);
	}
	if (!(tab_chr = ft_strsplit("ft_print lst_ch mems nbrs put srcs strs", ' ')))
		return (0);
	if (!(tab_int = test_pars(av - 1, &ac[1], tab_chr, 0)))
		return (0);
	ft_printf("%d\n%d\n%d\n%d\n%d\n%d\n", tab_int[0], tab_int[1], tab_int[2], tab_int[3], tab_int[4], tab_int[5]);
	return (0);
}
