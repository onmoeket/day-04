/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onmoeket <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 09:52:32 by onmoeket          #+#    #+#             */
/*   Updated: 2020/07/17 09:52:41 by onmoeket         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	factorial(int num)
{
	if (num == 0)
		return (1);
	return (num * factorial(num - 1));
}

int	ft_recursive_factorial(int nb)
{
	if (nb > 10)
		return (0);
	if (nb == 0)
		return (1);
	if (nb <= 0)
	{
		return (0);
	}
	else
	{
		return (factorial(nb));
	}
	return (factorial(nb));
}

