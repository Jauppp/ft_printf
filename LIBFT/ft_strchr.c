/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <cdomet-d@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:37:13 by cdomet-d          #+#    #+#             */
/*   Updated: 2023/11/23 12:21:30 by cdomet-d         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = -1;
	while (s && s[++i])
	{
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
	}
	if (s[i] == (char)c)
		return (&((char *)s)[i]);
	return (NULL);
}
