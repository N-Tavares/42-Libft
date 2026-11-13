/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:45:59 by nunda-si          #+#    #+#             */
/*   Updated: 2026/11/13 00:29:28 by nunda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
/*
void	*map_func(void *content)
{
	return (ft_strjoin((char *)content, "!"));
}

void	del_print(void *content)
{
	puts((char *)content);
}

int	main(void)
{
	t_list	*lista;
	t_list	*mapped;

	lista = ft_lstnew(ft_strdup("Hello"));
	ft_lstadd_back(&lista, ft_lstnew(ft_strdup("World")));
	mapped = ft_lstmap(lista, map_func, free);
	ft_lstiter(mapped,	del_print);
	ft_lstclear(&lista, free);
	ft_lstclear(&mapped, free);
	return (0);
}
*/
