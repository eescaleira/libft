/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:28:40 by eescalei          #+#    #+#             */
/*   Updated: 2023/05/02 17:06:23 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*result;

	j = 0;
	if (!s || start >= ft_strlen((char *)s) || !len)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	result = malloc ((len +1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (j < len)
	{
		result[j] = s[start];
		start++;
		j++;
	}
	result[j] = '\0';
	return (result);
}
