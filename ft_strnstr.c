/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:55:50 by mvautrot          #+#    #+#             */
/*   Updated: 2022/11/22 17:17:49 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	lenbis;

	i = 0;
	lenbis = ft_strlen((char *)little);
	if (little == NULL || lenbis == 0)
		return ((char *)big);
	if (lenbis > len)
		return (NULL);
	while (big[i] && len)
	{
		if (ft_strncmp((char *)&big[i], (char *)little, lenbis) == 0
			&& lenbis <= len)
		{
			if ((i + lenbis) > len)
				return (NULL);
			return ((char *)&big[i]);
		}
	i++;
	}
	return (NULL);
}
