/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:26:31 by ekuchel           #+#    #+#             */
/*   Updated: 2023/03/11 15:38:58 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == '%')
		len += ft_printfc('%');
	else if (format == 'c')
		len += ft_printfc(va_arg(args, int)); //this proofs if the arguments are single bytes and therefore int datatype will be used
	else if (format == 's')
		len += ft_printfs(va_arg(args, char *)); //if the arguments are strings we expect a char pointer to be used
	else if (format == 'd' || format == 'i')
		len += ft_printfd(va_arg(args, int));// ant integer "int" for digits or numerical values
	else if (format == 'u')
		len += ft_printfu(va_arg(args, unsigned int)); // for usigned integers
	else if (format == 'x' || format == 'X')
		len += ft_printfx(va_arg(args, unsigned int), (char) format); // for hexadecimal values
	else if (format == 'p')
		len += ft_printfp(va_arg(args, unsigned long int)); //for unsigned longs
	return (len);
}
