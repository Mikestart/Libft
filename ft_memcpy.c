/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoledan <mtoledan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:16:43 by mtoledan          #+#    #+#             */
/*   Updated: 2023/04/07 12:04:53 by mtoledan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t n)
{
	char		*destp;
	const char	*srcp;
	size_t		i;

	destp = (char *) dest;
	srcp = (const char *) src;
	i = 0;
	if (!destp && !srcp)
		return (NULL);
	while (i < n)
	{
		destp[i] = srcp[i];
		i ++;
	}
	return (dest);
}
