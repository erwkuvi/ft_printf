/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:01:24 by ekuchel           #+#    #+#             */
/*   Updated: 2023/03/11 15:05:10 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// #include <stdio.h>
// For ft_printf, the variadic arguments function is gonne be needed. This function allows it to take a number of different variables into the function itself, that is why in the function prototype "..." are used
int	ft_printf(const char *str, ...)
{
	va_list	args; //here is are there variadic list declared with the name "args" 
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start (args, str); //To inizialize the variadic list va_start is used and between parenthesis you need to put the name of the list and the variable type from which the arguments are gonna be taken
	while (str[i])
	{
		if (str[i] == '%' && ft_check(str[i + 1])) // same as in the standard printf the "%" sign needs to be used as predecessor of the format it needs to take and display, here ft_check is used for that purpose
			len += ft_format(args, str[i++ + 1]); //Once ft_check exists, the ft_formmat function sorts the format
		else if (str[i] == '%' && !ft_check(str[i + 1]))
		{
			write(1, "error\n", 6);
			return (len);
		}
		else
		{
			len += ft_printfc(str[i]);// because we are in a while loop the function "ft_putchar of ft_printfc" is used to display a string 
		}
		i++;
	}
	va_end (args);
	return (len);
}

// int	main(void)
// {
// 	// int	a;
// 	// a = -10;
// 	// void			*b;
// 	// char	*string[20] = "This is a string";

// 	// printf("%d\n", printf("%x", 9223372036854775807LL));
// 	ft_printf("%d\n", ft_printf("%x\n", 9223372036854775807LL));
// 	// ft_printf("%d\n", ft_printf("%x", LONG_MAX));
// 	return (0);
// }
