/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:27:33 by aylemrab          #+#    #+#             */
/*   Updated: 2023/07/04 12:37:39 by aylemrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    initialize(stack* stack)
{
    stack->top = NULL;
}

int is_empty(stack* stack)
{
    return (stack->top == NULL);
}

int peek(stack* stack)
{
    if (is_empty(stack))
    {
        write(1, "stack is empty.\n", 16);
        return (-1);
    }
    return (stack->top->data);
}

void    display(stack* stack)
{
    if (is_empty(stack)) 
    {
        write(1, "stack is empty.\n", 16);
        return;
    }
    node* current = stack->top;
    ft_printf("Stack elements: ");
    while (current != NULL)
    {
        ft_printf("%d ", current->data);
        current = current->next;
    }
    write(1, "\n", 1);
}