/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:54:45 by mvautrot          #+#    #+#             */
/*   Updated: 2022/11/18 08:18:42 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	tab = (char *) malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!(tab))
		return (NULL);
	if (!s1 || !s2)
		return (NULL);
	while (s1[i])
	{
		tab[i] = s1[i];
	i++;
	}
	while (s2[j])
	{
		tab[i + j] = s2[j];
	j++;
	}
	tab[i + j] = '\0';
	return (tab);
}
