/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osousa-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 12:28:26 by osousa-d          #+#    #+#             */
/*   Updated: 2025/08/14 12:28:30 by osousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	read_spec(va_list args, char	specifier)
{
	int	num;
	int	count;

	num = 0;
	if (specifier == 'd' || specifier == 'i')
	{
		num = va_arg(args, int);
		count += ft_print_nbr(num);
	}
	else if (specifier == 'u')
	{
		num = va_arg(args, unsigned int);
		count += ft_print_unsigned(num);
	}
	return (count);
}

int	ft_printf(const char *, ...)
{

}

