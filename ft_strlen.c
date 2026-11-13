/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 18:06:54 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/08 16:38:40 by nunda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
int main(int ac, char **av)
{
	int i = 1;

	while(i < ac)
	{
		printf("%s -> Lenght: %ld\n", av[i], ft_strlen(av[i]));
		i++;
	}
	return (0);
}
*/
