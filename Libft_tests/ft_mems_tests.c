/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mems_tests.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 14:36:27 by mmanley           #+#    #+#             */
/*   Updated: 2018/09/01 16:08:25 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testeur.h"

void			mems()
{
	char	s1[19] = "Hey guys";
	char	s2[19] = "Hey guys";
	char	s3[20] = "Hey";
	char	s4[20] = ", See you later";
	char	s5[20] = "Hey";
	char	s6[20] = ", See you later";

	printf("%s\n", s1);
	ft_memset(&s1, 33, 15);
	printf("%s\n", s1);
	ft_bzero(s1, 5);
	printf("_%s_ %p\n", s1, s1);
	printf("%s\n", s2);
	memset(&s2, 33, 15);
	printf("%s\n", s2);
	ft_bzero(s2, 5);
	printf("_%s_ %p\n", s2, s2);
	ft_memcpy(s3, s4, 5);
	memcpy(s3, s4, 5);
	printf("Memcpy\nM_%s_\nT_%s_\n", s1, s2);
	ft_memccpy(s3, s4, 14, 5);
	memccpy(s1, s4, 14, 5);
	printf("Memccpy\nM_%s_\nT_%s_\n", s3, s1);
	ft_memmove(s3, s4, 14);
	memmove(s5, s6, 14);
	printf("move\nM_%s_\nT_%s_\n", s3, s5);
}
