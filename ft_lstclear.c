/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:40:55 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/13 00:26:20 by nunda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}
/*
void del_func(void *content)
{
	free(content);
}
int main(void)
{
	t_list *head = NULL;
	t_list *node_1 =  ft_lstnew(ft_strdup("Hello"));
	t_list *node_2 =  ft_lstnew(ft_strdup("World!"));
	ft_lstadd_front(&head, node_1);
	ft_lstadd_front(&head, node_2);
	ft_lstclear(&node_1, del_func);
	printf("%p\n", (void *)node_1);
	return (0);
}
*/
