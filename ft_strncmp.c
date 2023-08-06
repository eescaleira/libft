/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:37:43 by eescalei          #+#    #+#             */
/*   Updated: 2023/05/02 17:53:11 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, const char *s2, int n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n < 0)
		return (-1);
	while (n > 0 && *str1 == *str2 && *str1 != '\0' && *str2 != '\0')
	{
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*str1 - *str2);
}
