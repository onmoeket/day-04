/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onmoeket <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 10:03:37 by onmoeket          #+#    #+#             */
/*   Updated: 2020/07/17 10:03:44 by onmoeket         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int i;
	int letter;

	if (power < 0)
		return (0);
	letter = 1;
	i = 0;
	while (i < power)
	{
		letter = letter * nb;
		i++;
	}
	return (count);
}
