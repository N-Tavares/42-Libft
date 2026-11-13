/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:39:40 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/12 23:52:38 by nunda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void del_func(void *content)
{
	free(content);
}
int main(void)
{
	t_list *node =  ft_lstnew(ft_strdup("Hello"));
	ft_lstdelone(node, del_func);
	if (!node)
		printf("%p\n", (char *)node->content);
	printf("NULL\n");
	return (0);
}
*/
