/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:51:06 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/10 16:31:01 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_var *v)
{
	t_node	*tmp;

	tmp = v->a_tail;
	insert_end_stack(&v->a_head, v->a_tail->value);
	v->a_tail = v->a_tail->next;
	remove_node(tmp);
    write(1, "ra\n", 3);
}

void	rb(t_var *v)
{
	t_node	*tmp;

	tmp = v->b_tail;
	insert_end_stack(&v->b_head, v->b_tail->value);
	v->b_tail = v->b_tail->next;
	remove_node(tmp);
    write(1, "rb\n", 3);
}

void	rr(t_var *v)
{
	t_node	*tmp;

	tmp = v->a_tail;
	insert_end_stack(&v->a_head, v->a_tail->value);
	v->a_tail = v->a_tail->next;
	remove_node(tmp);
	tmp = v->b_tail;
	insert_end_stack(&v->b_head, v->b_tail->value);
	v->b_tail = v->b_tail->next;
	remove_node(tmp);
    write(1, "rr\n", 3);
}
