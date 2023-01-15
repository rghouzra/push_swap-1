/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bruh.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 08:25:10 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/01/13 09:25:47 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int number;
    int i;
    if (ac == 2)
    {
        number = atoi(av[1]);
        i = 1;
        if (number == 1)
                printf("1");
        while (++i <= number)
        {
            if (number % i == 0)
            {
                printf("%d", i);
                if (number == i)
                    break ;
                printf("*");
                number /= i;
                i = 1;
            }
        }
    }
    printf("\n");
    return (0);
}