/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:36:37 by eescalei          #+#    #+#             */
/*   Updated: 2023/05/01 15:55:14 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, int n)
{
	int				i;
	const char		*s1;
	char			*s2;

	if (!dest && !src)
		return (NULL);
	i = 0;
	s1 = (char *)src;
	s2 = dest;
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	return (dest);
}
