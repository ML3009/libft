/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:50:15 by mvautrot          #+#    #+#             */
/*   Updated: 2022/11/18 08:08:45 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		size;
	char	*tab;

	size = ft_strlen (s) + 1;
	tab = malloc (size * sizeof(char));
	if (!tab || !s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		tab[i] = s[i];
	i++;
	}
	tab [i] = '\0';
	return (tab);
}
