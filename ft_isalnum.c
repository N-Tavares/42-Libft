/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:36:03 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/07 16:56:00 by nunda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int main(void)
{
	int x1 = 'A';
	int x2 = 'Z';
	int x3 = '1';
	int x4 = '#';
	
	printf("%c: %d\n", x1, ft_isalnum(x1));
	printf("%c: %d\n", x2, ft_isalnum(x2));
	printf("%c: %d\n", x3, ft_isalnum(x3));
	printf("%c: %d\n", x4, ft_isalnum(x4));
	
	return (0);
}
*/