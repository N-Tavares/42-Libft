/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:42:47 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/07 16:57:32 by nunda-si         ###   ########.fr       */
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
	int x1 = 'A';
	int x2 = 'Z';
	int x3 = '1';
	int x4 = '#';
	
	printf("%c: %d\n", x1, ft_isascii(x1));
	printf("%c: %d\n", x2, ft_isascii(x2));
	printf("%c: %d\n", x3, ft_isascii(x3));
	printf("%c: %d\n", x4, ft_isascii(x4));
	
	return (0);
}
*/