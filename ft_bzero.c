/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 09:44:34 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/07 14:28:11 by nunda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = 0;
}
/*
int main(void)
{
	char	str1[13] = "Hello World!";
	
	printf("Str before: %s\n", str1);
	ft_bzero(str1 + 1, 5);
	printf("Str after: %s\n", str1);

	return (0);
}
*/