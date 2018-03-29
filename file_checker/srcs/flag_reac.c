/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_reac.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 13:02:26 by mmanley           #+#    #+#             */
/*   Updated: 2018/03/29 14:13:00 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "checks.h"

int		error_manager(int sv, int nbl, char *l1, char *l2)
{
	ft_printf(RED);
	if (sv & R)
		return (1);
	else if (sv & I)
		ft_printf("\nAt Line : %d\n", nbl);
	else if (sv & JAY)
		ft_printf("\n1->%s<-\n2->%s<-\n", l1, l2);
	else
		ft_printf(".");
	return (0);
}

int		other_manager(int sv, char *l1, char *l2)
{
	ft_printf(GREEN);
	if (sv & R)
		return (1);
	else if (sv & A)
		ft_printf("\n1->%s<-\n2->%s<-\n", l1, l2);
	else
		ft_printf(".");
	return (0);
}

int		reac_manager(char *l1, char *l2, int *sv, int ret)
{
	if (ret != 0)
		error_manager(sv[0], sv[1], l1, l2);
	else
		other_manager(sv[0], l1, l2);
	return (0);
}
