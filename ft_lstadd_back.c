/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 09:34:27 by nasimon-          #+#    #+#             */
/*   Updated: 2021/12/16 16:06:05 by nayran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_ultima(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

void			ft_lstadd_back(t_list **lst, t_list *newlst)
{
	t_list	*aux;

	aux = ft_ultima(*lst);
	if (aux)
		aux->next = newlst;
	else
		*lst = newlst;
}
