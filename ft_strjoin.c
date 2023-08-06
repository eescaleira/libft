/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:23:38 by eescalei          #+#    #+#             */
/*   Updated: 2023/04/24 16:41:08 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ns;
	int		i;

	i = 0;
	ns = malloc((ft_strlen(s1) + ft_strlen(s2) +1) * sizeof(char));
	if (ns == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ns[i] = s1[i];
		i++;
	}
	while (s2[i - ft_strlen(s1)] != '\0')
	{
		ns[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
