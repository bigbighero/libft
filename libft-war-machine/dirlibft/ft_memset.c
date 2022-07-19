/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:25:57 by roferrei          #+#    #+#             */
/*   Updated: 2022/07/01 02:22:24 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;


	str = (unsigned char *)s;
	while (n > 0)
	{
		str[n - 1] = c;
		n--;
	}
	return (s);
}

// int	main ()
// {
// 	char	pnt[] = "";
// 	char	pnt1[] = "";
// 	int		a = 5;

// 	ft_memset(pnt, 'a', 3);
// 	memset(pnt1, 'a', 3);
// 	printf("O resultado é %s\n", pnt);
// 	printf("O resultado é %s\n", pnt1);
// }