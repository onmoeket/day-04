/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onmoeket <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 09:45:30 by onmoeket          #+#    #+#             */
/*   Updated: 2020/07/17 09:45:35 by onmoeket         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int count;

	if (nb > 12)
		return (0);
	if (nb < 0)
		return (0);
	count = 1;
	while (nb >= 1)
	{
		count = count * nb;
		nb--;
	}
	return (count);
}

