/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:10:07 by eescalei          #+#    #+#             */
/*   Updated: 2023/04/24 15:23:44 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*c;
	int		i;
	int		len;

	len = ft_strlen ((char *)s);
	i = 0;
	c = malloc ((len +1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		c[i] = s[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
