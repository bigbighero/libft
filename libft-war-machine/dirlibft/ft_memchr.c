/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:25:49 by roferrei          #+#    #+#             */
/*   Updated: 2022/07/01 02:22:09 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	character;

	str = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == character)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	printf("test de ft_memchr: \n");
// 	if (memchr("source", 'r', 2) == ft_memchr("source", 'r', 2) 
	// && !strcmp(memchr("source", 'r', 5), ft_memchr("source", 'r', 5)))
// 		printf("OK\n");
// 	else
// 		printf("Failed.\n");
// }