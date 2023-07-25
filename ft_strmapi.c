/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoledan <mtoledan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:04:15 by mtoledan          #+#    #+#             */
/*   Updated: 2023/04/25 13:27:12 by mtoledan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{	
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*string_dest;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	string_dest = malloc(sizeof(char) *((ft_strlen(s) + 1)));
	if (!string_dest)
		return (NULL);
	ft_strcpy(string_dest, (char *) s);
	while (string_dest[i])
	{
		string_dest[i] = f(i, string_dest[i]);
		i++;
	}
	string_dest[i] = '\0';
	return (string_dest);
}
