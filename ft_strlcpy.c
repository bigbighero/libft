/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:26:13 by roferrei          #+#    #+#             */
/*   Updated: 2022/06/30 00:57:56 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return (strlen(src));
	while (i + 1 < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (strlen(src));
}

int main (void)
{
	printf("\nTeste de ft_strlcpy : \n");
	char	*c1 = "source";
	char	c2[] = "destination";
	char	c3[] = "destination";
	printf("6, sour : %lu, %s\n", ft_strlcpy(c2, c1, 5), c2);
	printf("6, source : %lu, %s\n", ft_strlcpy(c3, c1, 8), c3);
}