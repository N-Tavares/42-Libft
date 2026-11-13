/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:44:18 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/13 00:29:50 by nunda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void del_func(void *content)
{
	free(content);
}
void del_print(void *content)
{
	puts((char *)content);
	
}
int main(void)
{

	t_list *head =  ft_lstnew(ft_strdup("Hello"));
	t_list *node =  ft_lstnew(ft_strdup("World!"));
	ft_lstadd_front(&head, node);
	ft_lstiter(node, del_print);
	ft_lstclear(&head, del_func);
	return (0);
}
*/
