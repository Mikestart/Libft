/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoledan <mtoledan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:45:02 by mtoledan          #+#    #+#             */
/*   Updated: 2023/04/25 13:26:20 by mtoledan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	if (size == 0)
	{
		return (ft_strlen((char *)src));
	}
	while (src[i] && size > 1)
	{
		dst[i] = src[i];
		i ++;
		size--;
	}
	dst[i] = '\0';
	return (ft_strlen((char *)src));
}
