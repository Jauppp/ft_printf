/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <cdomet-d@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:42:08 by cdomet-d          #+#    #+#             */
/*   Updated: 2023/11/30 17:05:04 by cdomet-d         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static ssize_t	read_str(char flag, va_list arg_list)
{
	ssize_t	check;

	if (flag == 'd' || flag == 'i' || flag == 'u' )
		return (printd(arg_list, flag));
	else if (flag == 'x' || flag == 'X')
		return (printx(arg_list, flag));
	else if (flag == '%')
		return (printpercent());
	else if (flag == 's')
		return (printstr(arg_list));
	else if (flag == 'c')
		return (printc(arg_list));
	else if (flag == 'p')
		return (printp(arg_list));
	else
	{
		check = ft_putchar_fd('%', 1);
		if (check < 0)
			return (-1);
		check = ft_putchar_fd(flag, 1);
		if (check < 0)
			return (-1);
		return (check + 1);
	}
}

static ssize_t	ft_parse_format(const char *s, va_list arg_list,
					size_t *count, ssize_t *len)
{
	ssize_t	check;
	size_t	i;

	i = -1;
	check = 0;
	while (s[++i])
	{
		if (s[i] != '%')
		{
			check = ft_putchar_fd(s[i], 1);
			if (!check)
				return (-1);
		}
		else if (s[i] == '%')
		{
			(*count)++;
			check = read_str(s[++i], arg_list);
			if (check < 0)
				return (-1);
			(*len) += check;
		}
	}
	return (check);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg_list;
	ssize_t	check;
	ssize_t	total_len;
	size_t	count_flag;

	if (!format)
		return (-1);
	total_len = 0;
	count_flag = 0;
	va_start(arg_list, format);
	check = ft_parse_format(format, arg_list, &count_flag, &total_len);
	if (check < 0)
		return (-1);
	va_end(arg_list);
	return (ft_strlen(format) + total_len - (2 * count_flag));
}
