/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:29:18 by eescalei          #+#    #+#             */
/*   Updated: 2023/05/02 18:36:49 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	dcalc(size_t ns, int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		i++;
	while (ns >= 10)
	{
		ns = ns / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*s;
	size_t		i;
	size_t		ns;

	if (n < 0)
		ns = -(size_t)n;
	else
		ns = (size_t)n;
	i = dcalc(ns, n);
	s = (char *)malloc((i +2) * sizeof(char));
	if (s == NULL)
		return (NULL);
	s[0] = 45;
	s[i +1] = '\0';
	while (ns >= 10)
	{
		s[i--] = (ns % 10) + 48;
			ns = ns / 10;
	}
	s[i] = ns +48;
	return (s);
}

//int main(void)
// {
// 	printf ( "%s", (ft_itoa(-2147483648)));
// 	return(0);
// }