/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:44:34 by eescalei          #+#    #+#             */
/*   Updated: 2023/04/28 11:38:22 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;

	i = 0;
	if (!s || !f)
		return (0);
	s2 = malloc((ft_strlen(s) +1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
