/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:25:55 by roferrei          #+#    #+#             */
/*   Updated: 2022/06/30 03:15:11 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;

	tmp = (char *)malloc(sizeoff(char)*len);
	if (tmp == NULL)
		return (NULL);
	ft_memcpy(tmp, src, len);
	ft_memcpy(dest, tmp, len);
	free(tmp);
	return (dest);
}

// int	main(void)
// {
// 	printf("Test ft_memmove: \n");
// 	char s1[] = "string test";
// 	char s2[] = "string test";
// 	if(!strcmp(memmove(s1, s1 + 3, 5), ft_memmove(s2, s2 + 3, 5)) 
//	&& !strcmp(memmove(s1 + 3, s1, 5), ft_memmove(s2 + 3, s2, 5)))
// 		printf("Ok\n");
// 	else
// 		printf("Failed (tests : ft_memmove(s, s + 3, 5) 
//		and ft_memmove(s + 3, s, 5).\n");
// }