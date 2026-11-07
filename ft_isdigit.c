/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:32:03 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/07 16:58:11 by nunda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
	
	printf("%c: %d\n", x1, ft_isdigit(x1));
	printf("%c: %d\n", x2, ft_isdigit(x2));
	printf("%c: %d\n", x3, ft_isdigit(x3));
	printf("%c: %d\n", x4, ft_isdigit(x4));
	
	return (0);
}
*/