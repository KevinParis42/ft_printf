/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 13:05:19 by kparis            #+#    #+#             */
/*   Updated: 2020/01/20 15:55:16 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int p = 42;
	ft_printf("|%d\n", (ft_printf("%-*.*u", -4, 3, p)));
	printf("|%d\n", (printf("%-*.*u", -4, 3, p)));
}
