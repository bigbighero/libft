/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:26:11 by roferrei          #+#    #+#             */
/*   Updated: 2022/07/01 02:22:37 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_dest_len(char *dest, size_t size)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	size_t			src_size;

	j = 0;
	i = ft_dest_len(dst, size);
	src_size = ft_strlen(src);
	if (i < size)
	{
		while (i + j < size - 1 && src[j] != '\0')
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	return (i + src_size);
}

// int main(void)
// {
// 	printf("\nTest de ft_strlcat: \n");
// 	char *c1 = "source";
// 	char d2[20] = "destino";
// 	char d3[20] = "destino";
// 	char d5[20] = "orig";
// 	char d6[20] = "orig";
// 	char d7[20] = "orig";
// 	printf("7, destino: %lu, %s\n", ft_strlcat(d2, c1, 5), d2);
// 	printf("9, destino: %lu, %s\n", ft_strlcat(d3, c1, 9), d3);
// 	printf("10, dest: %lu, %s\n", ft_strlcat(d5, c1, 5), d5);
// 	printf("10, destsou: %lu, %s\n", ft_strlcat(d6, c1, 8), d6);
// 	printf("10, destsource: %lu, %s\n", ft_strlcat(d7, c1, 13), d7);
// }