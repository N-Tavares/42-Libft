/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:14:21 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/08 16:10:50 by nunda-si         ###   ########.fr       */
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
	int c1 = 'A';
	int c2 = 'Z';
	int c3 = '1';
	int c4 = '#';
	
	printf("%c: %d\n", c1, ft_isalpha(c1));
	printf("%c: %d\n", c2, ft_isalpha(c2));
	printf("%c: %d\n", c3, ft_isalpha(c3));
	printf("%c: %d\n", c4, ft_isalpha(c4));
	
	return (0);
}
*/
