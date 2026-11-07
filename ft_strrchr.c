/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 18:44:20 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/05 18:08:11 by nunda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_pos;

	last_pos = NULL;
	while (*s)
	{
		if (*s == (unsigned char) c)
			last_pos = ((char *)s);
		s++;
	}
	if (*s == (unsigned char) c)
		return ((char *)s);
	return (last_pos);
}
