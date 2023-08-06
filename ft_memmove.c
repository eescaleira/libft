/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:29:55 by eescalei          #+#    #+#             */
/*   Updated: 2023/05/01 15:55:30 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	if (!dest && !src)
		return (NULL);
	s = (char *)src;
	d = (char *)dest;
	i = n;
	if (d > s)
	{
		while (i-- > 0)
			d[i] = s[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// int		main(int argc, const char *argv[])
// {
// 	char	src[] = "lorem ipsum dolor sit amet";
// 	char	*dest;
// 	int		arg;

// 	dest = src + 1;
// 	arg = atoi(argv[1]);
// 	alarm(5);
// 	if (arg == 3)
// 	{
// 		if (dest != ft_memmove(dest, src, 8))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 22);
// 	}
// }