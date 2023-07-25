/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoledan <mtoledan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:40:36 by mtoledan          #+#    #+#             */
/*   Updated: 2023/04/25 13:55:13 by mtoledan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*dest;
	unsigned int		destlen;
	size_t				i;

	destlen = ft_strlen(s);
	i = 0;
	if (start > destlen)
		return (ft_strdup(""));
	if (start < 0 || start >= destlen)
		return (ft_strdup(""));
	if (len < 0 || start + len > destlen)
	len = destlen - start;
	dest = malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		dest[i] = s[start + i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}
