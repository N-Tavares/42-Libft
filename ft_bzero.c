/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 09:44:34 by nunda-si          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/11/13 16:54:14 by nunda-si         ###   ########.fr       */
=======
/*   Updated: 2026/11/13 18:59:33 by nunda-si         ###   ########.fr       */
>>>>>>> c67857a (libt v1)
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
	char str[] = "Nunda-si";

	printf("%s\n", str);
	ft_bzero(str, 8);
	printf("%s\n", str);

	return (0);
}
*/
