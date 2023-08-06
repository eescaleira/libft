/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:36:53 by eescalei          #+#    #+#             */
/*   Updated: 2023/04/25 23:08:47 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcat(char *dest, const char *src, size_t size)
// {
// 	size_t	a;
// 	size_t	b;
// 	size_t	x;
// 	a = ft_strlen(dest);
// 	b = 0;
// 	x = ft_strlen(dest);
// 	if ( size && x <= size )
// 	{
// 		while (src[b] != '\0' && a < (size -1))
// 		{
// 			dest[a] = src[b];
// 			a++;
// 			b++;
// 		}
// 	}
// 	dest[a] = '\0';
// 	if (size < x)
// 		x = size;
// 	return (x + ft_strlen((char *)src));
// }
size_t	ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int	i;
	unsigned int	y;
	unsigned int	dst_len;

	i = ft_strlen(dst);
	dst_len = ft_strlen(dst);
	y = 0;
	if (dstsize && ft_strlen(dst) <= dstsize)
	{
		while (src[y] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[y];
			i++;
			y++;
		}
		dst[i] = '\0';
	}
	if (dstsize == 0)
		return (0 + ft_strlen((char *)src));
	if (dstsize < ft_strlen(dst))
		return (dstsize + ft_strlen((char *)src));
	return (dst_len + ft_strlen((char *)src));
}
