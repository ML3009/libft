/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:28:59 by mvautrot          #+#    #+#             */
/*   Updated: 2022/11/23 12:07:11 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_slt(char const *s, size_t len)
{
	char			*dst;
	unsigned int	i;

	i = 0;
	dst = (char *) malloc ((len + 1));
	if (!dst || !s)
		return (NULL);
	while (i < len && s[i])
	{
		dst[i] = s[i];
	i++;
	}
	dst [i] = '\0';
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dst;

	if (start > ft_strlen(s))
		start = ft_strlen (s);
	if (start + len > ft_strlen (s))
		len = ft_strlen(s) - start;
	dst = ft_slt(s + start, len);
	return (dst);
}
