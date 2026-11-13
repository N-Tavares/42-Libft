/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:42:47 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/08 16:11:08 by nunda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int main(void)
{
	int c1 = 'A';
	int c2 = 'Z';
	int c3 = '1';
	int c4 = '#';
	
	printf("%c: %d\n", c1, ft_isascii(c1));
	printf("%c: %d\n", c2, ft_isascii(c2));
	printf("%c: %d\n", c3, ft_isascii(c3));
	printf("%c: %d\n", c4, ft_isascii(c4));
	
	return (0);
}
*/
