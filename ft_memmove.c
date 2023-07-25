/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoledan <mtoledan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:41:11 by mtoledan          #+#    #+#             */
/*   Updated: 2023/04/07 17:30:19 by mtoledan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*destp;
	unsigned char	*srcp;
	size_t			i;

	destp = (unsigned char *) dst;
	srcp = (unsigned char *) src;
	i = 0;
	if (!destp && !srcp)
		return (NULL);
	if (destp > srcp)
	{
		while (len-- > 0)
		{
			destp[len] = srcp[len];
		}
	}
	else
	{
		while (i < len)
		{
			destp[i] = srcp[i];
			i++;
		}
	}
	return (dst);
}
