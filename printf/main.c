/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/21 00:49:08 by ocota             #+#    #+#             */
/*   Updated: 2015/12/10 13:19:08 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	char a[20] = "ciorba de picioci";
	int b = 42;
	long llong = 1234567890123456;
	char c = 'Z';
	float zama = 1.4567;

	ft_printf("zama de cartofi: %d %s %c %f %D\n", b, a, c, zama, llong);
	printf("\n");
	printf("zama de cartofi: %d %s %c %f %ld\n", b, a, c, zama, llong);
	printf("\n");
	return (0);
}
