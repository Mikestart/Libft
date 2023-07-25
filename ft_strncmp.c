/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoledan <mtoledan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:51:43 by mtoledan          #+#    #+#             */
/*   Updated: 2023/04/25 13:27:57 by mtoledan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*sr1;
	unsigned char	*sr2;
	size_t			i;	

	sr1 = (unsigned char *) s1;
	sr2 = (unsigned char *) s2;
	i = 0;
	while ((s1[i] || s2[i]) && i != n)
	{
		if (s1[i] != s2[i])
			return (sr1[i] - sr2[i]);
		i++;
	}
	return (0);
}
