/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:21:56 by aylemrab          #+#    #+#             */
/*   Updated: 2023/07/04 12:44:12 by aylemrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "ft_printf/ft_printf.h"

typedef struct node
{
    int data;
    struct node*    next;
} node;

typedef struct
{
    node*   top;
} stack;

void    initialize(stack* stack);
void    push(stack* stack, int value);
void    display(stack* stack);
int     peek(stack* stack);
int     pop(stack* stack);
int     is_empty(stack* stack);

#endif