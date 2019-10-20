/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:37:51 by adiaz-lo          #+#    #+#             */
/*   Updated: 2019/10/17 15:22:04 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_dec_to_hexa(int dec)
{
	while (dec > 15)
	{
		
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] <= 127)
		{
			ft_putchar(str[i]);
		}
		else
		{
			while(str[i] < )
		}
		i++;
	}
}
