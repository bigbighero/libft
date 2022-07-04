/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:25:54 by roferrei          #+#    #+#             */
/*   Updated: 2022/07/01 02:22:14 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	s[10] = "aaaaa";
// 	char	sbis[10] = "aaaaa";
// 	printf("test de ft_memcpy:\n");
// 	strcpy(sbis, s);
// 	if(!strcmp(memcpy(s, "source", 3), ft_memcpy(sbis, "source", 3)) 
//		&& !strcmp(memcpy(s, "newsource", 8), ft_memcpy(sbis, "newsource", 8)))
// 		printf("ok\n");
// 	else
// 		printf("Failed: expeted '%s', got '%s'.\n", s, sbis);
// }