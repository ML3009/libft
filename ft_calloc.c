/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:50:39 by mvautrot          #+#    #+#             */
/*   Updated: 2022/11/23 09:54:58 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t count, size_t size)
{
	void	*tab;

	if (size != 0)
	{
		if (count < (SIZE_MAX / size))
		{
			tab = (malloc(count * size));
			if (!(tab))
				return (NULL);
			ft_bzero(tab, count * size);
			return (tab);
		}
	}
	return (NULL);
}
