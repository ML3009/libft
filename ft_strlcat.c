/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:37:48 by mvautrot          #+#    #+#             */
/*   Updated: 2022/11/18 08:21:39 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	i = 0;
	len_d = ft_strlen(dst);
	len_s = 0;
	while (src[len_s])
		len_s++;
	if (size == 0 || len_d > size)
		return (size + len_s);
	while (src[i] && (len_d + i < size - 1))
	{
		dst[len_d + i] = src[i];
	i++;
	}
	dst[len_d + i] = '\0';
	return (len_d + len_s);
}
