/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:43:02 by eescalei          #+#    #+#             */
/*   Updated: 2023/04/28 11:48:23 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	k;

	if (ft_strlen(s1) <= 0)
		return (ft_strdup(""));
	i = 0;
	k = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) != NULL)
	{
		if (i++ > k)
			return (ft_strdup(""));
	}
	while (ft_strchr(set, s1[k]) != NULL)
	{
		if (k-- <= i)
			return (ft_strdup(""));
	}
	return (ft_substr(s1, i, k + 1 - i));
}
