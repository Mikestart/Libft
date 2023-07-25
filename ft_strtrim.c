/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoledan <mtoledan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 18:40:17 by mtoledan          #+#    #+#             */
/*   Updated: 2023/04/25 13:52:35 by mtoledan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_copy(size_t start, size_t end, const char *s1, char **new_str)
{
	size_t	i;

	i = start;
	while (i <= end)
	{
		(*new_str)[i - start] = s1[i];
		i++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	char	*new_str;

	len = 0;
	start = 0;
	if (!s1 || !*s1)
		return (ft_strdup(""));
	while (s1[len])
		len++;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = len - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	new_str = (char *)ft_calloc(sizeof(char), (end - start + 2));
	if (!new_str)
		return (NULL);
	ft_copy(start, end, s1, &new_str);
	return (new_str);
}
