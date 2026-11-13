/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 18:44:20 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/08 17:13:24 by nunda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_pos;

	last_pos = NULL;
	while (*s)
	{
		if (*s == (char) c)
			last_pos = ((char *)s);
		s++;
	}
	if (*s == (char) c)
		return ((char *)s);
	return (last_pos);
}
/*
int main(void)
{
	char	s[] = "Hello World!";
	int		c = 'o';
	
	printf("%s\n", ft_strrchr(s, c));
	
	return (0);
}
*/
