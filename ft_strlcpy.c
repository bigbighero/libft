/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:26:13 by roferrei          #+#    #+#             */
/*   Updated: 2022/06/16 23:46:25 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	if (!size)
		return (strlen(src));
	while (index + 1 < size && src[index])
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (strlen(src));
}
