/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <cdomet-d@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:26:47 by cdomet-d          #+#    #+#             */
/*   Updated: 2023/11/30 17:04:52 by cdomet-d         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h> // for write
# include <limits.h> // for INT_MAX & INT_MIN
# include <stdarg.h> // for variadic functions handling

# define LOWER_HEXA "0123456789abcdef"
# define UPPER_HEXA "0123456789ABCDEF"
# define DEC "0123456789"

int			ft_printf(const char *format, ...);
size_t		ft_strlen(const char *s);
ssize_t		ft_p_putnbr(size_t nbr, int *count);
ssize_t		ft_putchar_fd(char c, int fd);
ssize_t		ft_putnbr_base(int long nbr, char *base, int *count);
ssize_t		ft_putstr_fd(char *s, int fd);
ssize_t		ft_u_putnbr_base(unsigned int nbr, char *base, int *count);
ssize_t		printpercent(void);
ssize_t		printc(va_list arg_list);
ssize_t		printd(va_list arg_list, char flag);
ssize_t		printp(va_list arg_list);
ssize_t		printstr(va_list arg_list);
ssize_t		printx(va_list arg_list, char flag);

#endif