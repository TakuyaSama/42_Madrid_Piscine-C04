/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 08:44:21 by adiaz-lo          #+#    #+#             */
/*   Updated: 2019/10/22 09:05:20 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int unb;

	if (nb < 0)
	{
		ft_putchar('-');
		unb = nb * -1;
	}
	else
	{
		unb = nb;
	}
	if (unb <= 9)
	{
		ft_putchar(unb % 10 + 48);
	}
	else
	{
		ft_putnbr(unb / 10);
		ft_putchar(unb % 10 + 48);
	}
}
