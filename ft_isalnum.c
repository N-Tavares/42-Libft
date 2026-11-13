/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:36:03 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/08 16:12:00 by nunda-si         ###   ########.fr       */
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
	int c1 = 'A';
	int c2 = 'Z';
	int c3 = '1';
	int c4 = '#';
	
	printf("%c: %d\n", c1, ft_isalnum(c1));
	printf("%c: %d\n", c2, ft_isalnum(c2));
	printf("%c: %d\n", c3, ft_isalnum(c3));
	printf("%c: %d\n", c4, ft_isalnum(c4));
	
	return (0);
}
*/
