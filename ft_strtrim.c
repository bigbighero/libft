/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:26:22 by roferrei          #+#    #+#             */
/*   Updated: 2022/07/19 19:29:14 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start] != NULL))
		start++;
	len = ft_strlen(&s1[start]); //& == pointer addres
	if (len != 0)
		while (s1[start + len - 1]
			&& ft_strrchr(set, s1[start + len - 1]) != NULL)
			len--;
	return (ft_substr(s1, start, len));
}
