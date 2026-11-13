/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:01:09 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/13 00:28:58 by nunda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
int main(void)
{
	char *str = "Hello";
	t_list *head = NULL;
	t_list *new_node = ft_lstnew(str);

	ft_lstadd_back(&head, new_node);
	printf("%s\n", (char *)head->content);

	free (new_node);
	return (0);	
}
*/
