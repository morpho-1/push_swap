/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:06:30 by aylemrab          #+#    #+#             */
/*   Updated: 2023/07/04 13:08:01 by aylemrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    stack stack;

    initialize(&stack);
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    display(&stack);
    ft_printf("top element: %d\n", peek(&stack));
    ft_printf("elements popped: %d, %d\n", pop(&stack), pop(&stack));
    display(&stack);
    ft_printf("is the stack empty? %s\n", is_empty(&stack) ? "Yes" : "No");

    return (0);
}
