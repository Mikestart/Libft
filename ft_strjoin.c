/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoledan <mtoledan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:59:01 by mtoledan          #+#    #+#             */
/*   Updated: 2023/04/25 13:23:49 by mtoledan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{	
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	*ft_strncat(char *dest, char *src, unsigned int nb)
{	
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] && i < nb)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	alloc;
	char	*r;

	if (!s1 && !s2)
		return (NULL);
	alloc = 0;
	if (s1)
		alloc = alloc + ft_strlen(s1);
	if (s2)
		alloc = alloc + ft_strlen(s2);
	r = (char *)malloc(sizeof(char) * (alloc + 1));
	if (!r)
		return (NULL);
	if (s1 && s2)
	{
	r = ft_strncat(ft_strcpy(r, (char *)s1), (char *)s2, ft_strlen(s2));
		return (r);
	}
	else if (s1 != NULL && s2 == NULL)
		return (ft_strcpy(r, (char *)s1));
	else if (s1 == NULL && s2 != NULL)
		return (ft_strcpy(r, (char *)s2));
	else
		return (NULL);
}
