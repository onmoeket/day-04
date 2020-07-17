/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onmoeket <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 10:15:34 by onmoeket          #+#    #+#             */
/*   Updated: 2020/07/17 10:15:37 by onmoeket         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
  int count;
  if (power < 0)
    return (0);
  
  if (power > 0)
  {
    count = nb * ft_recursive_power(nb, power - 1);
    return (count);
  }
  else
  {
    return(1);
  }
  
}
