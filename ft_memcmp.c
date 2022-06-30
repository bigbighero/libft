/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:25:51 by roferrei          #+#    #+#             */
/*   Updated: 2022/06/30 03:06:38 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char s1[] = "42cadet";
// 	char s2[] = "42cadetabc";
// 	printf("Test de ft_memcmp: %d\n", ft_memcmp(s1, s2, 3));
// 	printf("Test de memcmp: %d\n", memcmp(s1, s2, 3));
// 	printf("Test de ft_memcmp: %d\n", ft_memcmp(s1, s2, 8));
// 	printf("Test de memcmp: %d\n", memcmp(s1, s2, 8));
// 	return (0);
// }