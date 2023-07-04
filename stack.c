/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:18:37 by aylemrab          #+#    #+#             */
/*   Updated: 2023/07/04 13:06:17 by aylemrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(stack* stack, int value)
{
    node* new_node = (node*)malloc(sizeof(node));
    if (new_node == NULL)
    {
        write(2, "memory allocation failed. cannot push element.\n", 48);
        return ;
    }
    new_node->data = value;
    new_node->next = stack->top;
    stack->top = new_node;
}

int pop(stack* stack)
{
    if (is_empty(stack))
    {
        write(2, "stack is empty. cannot pop element.\n", 37);
        return (-1);
    }
    node* top_node = stack->top;
    int value = top_node->data;
    stack->top = top_node->next;
    free(top_node);
    return (value);
}
