/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 16:11:04 by mmanley           #+#    #+#             */
/*   Updated: 2018/05/12 16:20:55 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testeur.h"

void			flag_d(void)
{
	int			n1;
	long			n2;
	int			n3;
	int			ret;
	int			ret2;

	n1 = 666;
	n2 = 999999999999;
	n3 = 123456;
	ret = ft_printf("Y---1->%d<-2->%d<-3->%d<-\n", n1, n2, n3);
	ret2 = printf("T---1->%d<-2->%d<-3->%d<-\n", n1, n2, n3);
	printf("Y-%d == T-%d\n", ret, ret2);
}

void			ft_print(void)
{
	flag_d();
	/*flag_u();
	flag_c();
	flag_s();*/
}
