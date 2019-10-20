/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 18:53:38 by adiaz-lo          #+#    #+#             */
/*   Updated: 2019/10/17 15:22:14 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int	is_printable;
	int	i;

	is_printable = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 31 && str[i] <= 127))
		{
			is_printable = 0;
		}
		i++;
	}
	return (is_printable);
}
