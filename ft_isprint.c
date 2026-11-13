/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:55:39 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/08 16:11:40 by nunda-si         ###   ########.fr       */
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
	int c1 = 'A';
	int c2 = 'Z';
	int c3 = '1';
	int c4 = '#';
	
	printf("%c: %d\n", c1, ft_isprint(c1));
	printf("%c: %d\n", c2, ft_isprint(c2));
	printf("%c: %d\n", c3, ft_isprint(c3));
	printf("%c: %d\n", c4, ft_isprint(c4));
	
	return (0);
}
*/
