/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:25:47 by roferrei          #+#    #+#             */
/*   Updated: 2022/06/17 01:02:57 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	unsigned char	*dest_c;
	unsigned char	*src_c;

	i = 0;
	src_c = (unsigned char *)src;
	dest_c = (unsigned char *)dest;
	while(i < n)
	{
		dest_c[i] = src_c[i];
		if (src_c[i]==(unsigned char)c)
			return((void *)dest + i + 1);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("teste de ft_memccpy :\n");
// 	char dst[20] = "destination";
// 	char dst2[20] = "destination";
// 	if (memccpy(dst, "source", ' ', 8) == ft_memccpy(dst2, "source", ' ', 8) && !strcmp(dst, dst2) && (char*)memccpy(dst, "2emesource", 'e', 8) - dst == (char*)ft_memccpy(dst2, "2emesource", 'e', 8) - dst2 && !strcmp(dst, dst2))
// 		printf("OK\n");
// 	else
// 		printf("Failed.\n");
	
// 	printf("--------------------------");
// 	char	src[20] = "test1 test2 CtestC";
// 	char	dest[20] = "aaaaaaaaaa";
// 	char	src_ft[20] = "test1 test2 CtestC";
// 	char	dst_ft[20] = "aaaaaaaaaa";
	
// 	printf("ft_memccpy: %s\nmemccpy: %s\n",
// 		(char *)ft_memccpy(dst_ft, src_ft, 'C', 17),
// 		(char *)memccpy(dest, src, 'C', 17));
// 	printf("dst: %s\nsrc: %s\ndst_ft: %s\nsrc_ft: %s\n", dst, 
// 		src, dst_ft, src_ft);
// }