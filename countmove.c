/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countmove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:41:14 by eassamer          #+#    #+#             */
/*   Updated: 2021/12/15 16:41:08 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	printcount(t_var *he)
{
	static int	i;

	(void)he;
	printf("count : %d \n", i);
	i++;
}
