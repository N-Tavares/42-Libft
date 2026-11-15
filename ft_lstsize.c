/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 11:57:44 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/13 17:22:48 by nunda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int main(void)
{
	t_list *head = NULL;
	ft_lstadd_front(&head, ft_lstnew("World"));
	ft_lstadd_front(&head, ft_lstnew("Hello"));

	int size = ft_lstsize(head);
	printf("%d\n", size);

	return (0);	
}
*/
