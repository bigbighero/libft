/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:25:55 by roferrei          #+#    #+#             */
/*   Updated: 2022/07/21 17:56:14 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;

	temp = (char *)dest;
	if (dest > src)
	{
		while (n != 0)
		{
			n--;
			temp[n] = ((char *)src)[n];
		}
	}
	else
		ft_memcpy(temp, src, n);
	return (dest);
}
