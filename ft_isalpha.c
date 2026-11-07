/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:14:21 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/07 16:57:03 by nunda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
	
	printf("%c: %d\n", x1, ft_isalpha(x1));
	printf("%c: %d\n", x2, ft_isalpha(x2));
	printf("%c: %d\n", x3, ft_isalpha(x3));
	printf("%c: %d\n", x4, ft_isalpha(x4));
	
	return (0);
}
*/