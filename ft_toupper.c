/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 18:03:09 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/08 16:15:35 by nunda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
int main(void)
{
	int c1 = 'a';
	int c2 = 'Z';
	int c3 = '1';
	int c4 = '$';

	printf("%c -> %c\n", c1, ft_toupper(c1));
	printf("%c -> %c\n", c2, ft_toupper(c2));
	printf("%c -> %c\n", c3, ft_toupper(c3));
	printf("%c -> %c\n", c4, ft_toupper(c4));
}
*/
