/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:55:39 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/07 16:59:13 by nunda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	
	printf("%c: %d\n", x1, ft_isprint(x1));
	printf("%c: %d\n", x2, ft_isprint(x2));
	printf("%c: %d\n", x3, ft_isprint(x3));
	printf("%c: %d\n", x4, ft_isprint(x4));
	
	return (0);
}
*/