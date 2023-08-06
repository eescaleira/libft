/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:35:33 by eescalei          #+#    #+#             */
/*   Updated: 2023/05/02 17:34:08 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	y;
	unsigned char	a;

	y = 0;
	a = c;
	while (s[y] != a && s[y])
		y++;
	if (s[y] == a)
		return ((char *)s + y);
	return (NULL);
}
