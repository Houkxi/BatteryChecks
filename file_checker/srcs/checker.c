/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 12:15:31 by mmanley           #+#    #+#             */
/*   Updated: 2018/06/11 20:10:32 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "checks.h"

int			flag_checker(char **ac, int av)
{
	int		sv;
	int		i;

	i = 1;
	sv = 0;
	while (i < av)
	{
		if (ac[i][0] == '-' && !(options(ac[i], &sv)))
		{
			ft_printf("Invalid Option\n");
			return (-1);
		}
		else if (sv & 128)
		{
			ft_printf("options: raji\n");
			return (-1);
		}
		i++;
	}
	return (sv);
}

int			file_search(char **file1, char **file2, char **ac, int av)
{
	int		i;
	int		ct;

	i = 1;
	ct = 0;
	while (i < av && ct < 2)
	{
		if (ac[i][0] != '-' && ct == 0)
		{
			*file1 = ft_strdup(ac[i]);
			ct++;
		}
		else if (ac[i][0] != '-' && ct == 1 && (ft_strcmp(*file1, ac[i])) != 0)
		{
			*file2 = ft_strdup(ac[i]);
			ct++;
		}
		else
			i++;
	}
	return (0);
}

int			reader_cmp(char *file1, char *file2, int fd1, int sv)
{
	int		ret[3];
	int		fd2;
	int		nbl;
	char	*line1;
	char	*line2;

	line1 = NULL;
	line2 = NULL;
	nbl = 0;
	if (!(fd1 = open(file1, O_RDONLY)))
		return (-1);
	if (!(fd2 = open(file2, O_RDONLY)))
		return (-1);
	while ((ret[1] = get_next_line(fd1, &line1)) > 0 &&
		(ret[2] = get_next_line(fd2, &line2)))
	{
		nbl++;
		ret[0] = ft_strcmp(line1, line2);
		ret[1] = sv;
		ret[2] = nbl;
		reac_manager(line1, line2, &ret[1], ret[0]);
		ft_strdel(&line1);
		ft_strdel(&line2);
	}
	return (0);
}

int			main(int argv, char **argc)
{
	int		sv;
	int		i;
	char	*f1;
	char	*f2;

	i = 1;
	if ((sv = flag_checker(argc, argv)) == -1)
		return (0);
	file_search(&f1, &f2, argc, argv);
	if (!f1 || !f2)
	{
		ft_printf("Wrong Target Files : Need two different\n");
		return (0);
	}
	reader_cmp(f1, f2, 0, sv);
	ft_printf("\n");
	return (0);
}
