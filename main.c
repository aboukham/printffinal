/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaboukha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 00:02:48 by aaboukha          #+#    #+#             */
/*   Updated: 2020/02/24 00:12:53 by aaboukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#define d 45
//#define f ("%*p\n", 3, NULL)

int	main(void)
{
/*	char	i;

	i = 0;
	printf("%d\n", ft_printf("hello %s\n ssss%%%d\n ++++ %010u\n aaaaaaa %-*.10X\n bbbb %%%%%7s\n", "aboukhame---------", 345, -1, 10,  476, "aziz"));
	printf("%d\n", printf("hello %s\n ssss%%%d\n ++++ %010u\n aaaaaaa %-*.10X\n bbbb %%%%%7s\n", "aboukhame---------", 345, -1, 10, 476, "aziz"));
	return (0);

*/

	int rt = 0;
	int rtor = 0;

	rt = ft_printf("Bla bla %-c", 'a');
	rtor = printf("Bla bla %-c", 'a');

	//char	c = '\0';
	//write(1, &c, 1);
	printf ("\naziz = %d\nrtpr = %d\n", rt , rtor);


}
