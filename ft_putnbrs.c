/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <cdomet-d@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:57:17 by cdomet-d          #+#    #+#             */
/*   Updated: 2023/11/30 16:51:45 by cdomet-d         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putnbr_base(int long nbr, char *base, int *count)
{
	long int	len;
	ssize_t		r;

	(*count)++;
	len = ft_strlen(base);
	if (nbr < 0)
	{
		(*count)++;
		nbr *= -1;
		r = write(1, "-", 1);
		if (!r)
			return (-1);
	}
	if (nbr >= len)
		ft_putnbr_base(nbr / len, base, count);
	r = write(1, &base[nbr % len], 1);
	if (!r)
		return (-1);
	return (*count);
}

ssize_t	ft_p_putnbr(size_t nbr, int *count)
{
	ssize_t			r;

	(*count)++;
	if (nbr >= 16)
		ft_p_putnbr(nbr / 16, count);
	r = write(1, &LOWER_HEXA[nbr % 16], 1);
	if (!r)
		return (-10);
	return (*count);
}

ssize_t	ft_u_putnbr_base(unsigned int nbr, char *base, int *count)
{
	size_t			len;
	ssize_t			r;

	(*count)++;
	len = ft_strlen(base);
	if (nbr >= len)
		ft_u_putnbr_base(nbr / len, base, count);
	r = write(1, &base[nbr % len], 1);
	if (!r)
		return (-1);
	return (*count);
}
