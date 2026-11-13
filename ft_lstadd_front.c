/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 11:55:44 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/12 23:30:06 by nunda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int main(void)
{
	char *str = "Hello";
	t_list *head = NULL;
	t_list *new_node = ft_lstnew(str);

	ft_lstadd_front(&head, new_node);
	printf("%s\n", (char *)head->content);

	free (new_node);
	return (0);	
}
*/
