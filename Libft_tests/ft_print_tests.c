/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tests.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 16:11:04 by mmanley           #+#    #+#             */
/*   Updated: 2018/05/14 15:21:43 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testeur.h"

void			flag_d(void)
{
	int			n1;
	long		n2;
	int			n3;
	int			ret;
	int			ret2;

	n1 = 666;
	n2 = 999999999999;
	n3 = 123456;
	ft_printf("**************FLAG_D**************\n*\n");
	ret = ft_printf("BASIC : Y---1->%d<-->%d<-->%d<-\n", n1, n2, n3);
	ret2 = printf("BASIC : T---1->%d<-->%d<-->%d<-\n", n1, n2, n3);
	printf("RET : Y->%d == T->%d\n", ret, ret2);
	ret = ft_printf("MAXmin : Y---1->%d<-->%d<-->%d<-\n", MAX_INT, MIN_INT, MAX_INT + 2);
	ret2 = printf("MAXmin : T---1->%d<-->%d<-->%d<-\n", MAX_INT, MIN_INT, MAX_INT + 2);
	printf("RET : Y->%d == T->%d\n", ret, ret2);
	ret = ft_printf("Width : Y---1->%6d<-->%5d<-->%11d<-\n", n1, n2, n3);
	ret2 = printf("Width : T---1->%6d<-->%5d<-->%11d<-\n", n1, n2, n3);
	printf("RET : Y->%d == T->%d\n", ret, ret2);
	ret = ft_printf("Prec : Y---1->%.6d<-->%.2d<-->%.7d<-\n", n1, n2, n3);
	ret2 = printf("Prec : T---1->%.6d<-->%.2d<-->%.7d<-\n", n1, n2, n3);
	printf("RET : Y->%d == T->%d\n", ret, ret2);
	ret = ft_printf("Prec 0 : Y---1->%.0d<-->%.0d<-->%.0d<-\n", 0, 1, n3);
	ret2 = printf("Prec 0 : T---1->%.0d<-->%.0d<-->%.0d<-\n", 0, 1, n3);
	printf("RET : Y->%d == T->%d\n", ret, ret2);
	ft_printf("\n**************END_FD**************\n");
}

void			flag_u(void)
{
	int			n1;
	long		n2;
	int			n3;
	int			ret;
	int			ret2;

	n1 = -666;
	n2 = 999999999999;
	n3 = 123456;
	ft_printf("**************FLAG_U**************\n*\n");
	ret = ft_printf("BASIC : Y---1->%u<-->%u<-->%u<-\n", n1, n2, n3);
	ret2 = printf("BASIC : T---1->%u<-->%u<-->%u<-\n", n1, n2, n3);
	printf("RET : Y->%d == T->%d\n", ret, ret2);
	ret = ft_printf("MAXmin : Y---1->%u<-->%u<-->%u<-\n", MAX_INT, MIN_INT, MAX_INT + 2);
	ret2 = printf("MAXmin : T---1->%u<-->%u<-->%u<-\n", MAX_INT, MIN_INT, MAX_INT + 2);
	printf("RET : Y->%d == T->%d\n", ret, ret2);
	ret = ft_printf("Width : Y---1->%6u<-->%5u<-->%11u<-\n", n1, n2, n3);
	ret2 = printf("Width : T---1->%6u<-->%5u<-->%11u<-\n", n1, n2, n3);
	printf("RET : Y->%d == T->%d\n", ret, ret2);
	ret = ft_printf("Prec : Y---1->%.6u<-->%.2u<-->%.7u<-\n", n1, n2, n3);
	ret2 = printf("Prec : T---1->%.6u<-->%.2u<-->%.7u<-\n", n1, n2, n3);
	printf("RET : Y->%d == T->%d\n", ret, ret2);
	ret = ft_printf("Prec 0 : Y---1->%.0u<-->%.u<-->%.0u<-\n", 0, 1, n3);
	ret2 = printf("Prec 0 : T---1->%.0u<-->%.u<-->%.0u<-\n", 0, 1, n3);
	printf("RET : Y->%d == T->%d\n", ret, ret2);
	ft_printf("\n**************END_FU**************\n");
}

void			flag_c(void)
{
	int			ret;
	int			ret2;

	ft_printf("**************FLAG_C**************\n*\n");
	ret = ft_printf("BASIC : Y---1->%c<-->%c<-->%c<-\n", 'A', 'b', '~');
	ret2 = printf("BASIC : T---1->%c<-->%c<-->%c<-\n",  'A', 'b', '~');
	printf("RET : Y->%d == T->%d\n", ret, ret2);
	ret = ft_printf("Prec : Y---1->%c<-->%.0c<-->%.5c<-\n", '\0', 'b', '~');
	ret2 = printf("Prec : T---1->%c<-->%.0c<-->%.5c<-\n",  '\0', 'b', '~');
	printf("RET : Y->%d == T->%d\n", ret, ret2);
	ret = ft_printf("Width : Y---1->%8c<-->\0%4c<-->%9c<-\n", NULL, 'b', '~');
	ret2 = printf("Width : T---1->%8c<-->\0%4c<-->%9c<-\n",  NULL, 'b', '~');
	printf("RET : Y->%d == T->%d\n", ret, ret2);
	ft_printf("\n**************END_FC**************\n");
}

void			flag_s(void)
{
	int			ret;
	int			ret2;
	char		*s;

	s = "This is simplys to see how you deal with a certain big string, because\
	it is an important feature to try out, ... { \t}, \v, %s is not hre to be!";
	ft_printf("**************FLAG_S**************\n*\n");
	ret = ft_printf("BASIC : Y---1->%s<-->%s<-->%s<-\n", "'A'", "Hey", "U R");
	ret2 = printf("BASIC : T---1->%s<-->%s<-->%s<-\n", "'A'", "Hey", "U R");
	printf("RET : Y->%d == T->%d\n", ret, ret2);
	ret = ft_printf("Width : Y---1->%10s<-->%5s<-->%s<-\n", "Salut", "AL0Ha RoTOt00", s);
	ret2 = printf("Width : T---1->%10s<-->%5s<-->%s<-\n", "Salut", "AL0Ha RoTOt00", s);
	printf("RET : Y->%d == T->%d\n", ret, ret2);
	ret = ft_printf("Prec : Y---1->%.s<-->%.8s<-->%.3s<-\n", NULL, NULL, NULL);
	ret2 = printf("Prec : T---1->%.s<-->%.8s<-->%.3s<-\n",  NULL, NULL, NULL);
	printf("RET : Y->%d == T->%d\n", ret, ret2);
	ft_printf("\n**************END_FS**************\n");
}

void			ft_print(void)
{
	flag_d();
	flag_u();
	flag_c();
	flag_s();
}
