/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:35:58 by eescalei          #+#    #+#             */
/*   Updated: 2023/04/23 17:26:40 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, int n)
{
	int				i;
	unsigned char	*s2;
	unsigned char	c2;

	i = 0;
	s2 = (unsigned char *)s;
	c2 = (unsigned char) c;
	while (i < n)
	{
		if (*s2 == c2)
			return (s2);
		s2++;
		i++;
	}
	return (NULL);
}
