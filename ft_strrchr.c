/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:44:24 by eescalei          #+#    #+#             */
/*   Updated: 2023/05/02 17:34:24 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;

	a = c;
	i = ft_strlen(s);
	while (s[i] != a && i > 0)
		i--;
	if (i == 0 && s[i] != a)
		return (0);
	return ((char *)(s + i));
}
