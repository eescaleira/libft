/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 12:49:09 by eescalei          #+#    #+#             */
/*   Updated: 2023/04/24 14:53:55 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (little[0] == '\0')
		return ((char *) big);
	while (i < len && big[i] != '\0')
	{
		while (big[i + j] == little[j] && i + j < len)
		{
			if (little[j +1] == '\0')
				return ((char *) &big[i]);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
