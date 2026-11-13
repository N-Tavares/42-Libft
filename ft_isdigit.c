/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:32:03 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/08 16:11:25 by nunda-si         ###   ########.fr       */
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
	int c1 = 'A';
	int c2 = 'Z';
	int c3 = '1';
	int c4 = '#';
	
	printf("%c: %d\n", c1, ft_isdigit(c1));
	printf("%c: %d\n", c2, ft_isdigit(c2));
	printf("%c: %d\n", c3, ft_isdigit(c3));
	printf("%c: %d\n", c4, ft_isdigit(c4));
	
	return (0);
}
*/
