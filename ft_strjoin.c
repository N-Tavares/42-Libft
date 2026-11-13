/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 11:56:44 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/13 00:30:02 by nunda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	strjoin = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!strjoin)
		return (NULL);
	ft_strlcpy(strjoin, s1, len_s1 + 1);
	ft_strlcat(strjoin, s2, len_s1 + len_s2 + 1);
	return (strjoin);
}
/*
int main(void)
{
	char const s1[] = "Nunda";
	char const s2[] = "-si";
	char *strjoin = ft_strjoin(s1, s2);

	printf("%s\n", strjoin);

	free (strjoin);
	return (0);
}
*/
