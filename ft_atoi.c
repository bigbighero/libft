/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:25:26 by roferrei          #+#    #+#             */
/*   Updated: 2022/07/15 16:47:40 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
1) handle white spaces
2) handle the sign
3) handle the conversion
*/

// #include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long int	i;
	long int	res;
	long int	sign;

	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	sign = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	res = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (res * sign);
}

// int main(int ac, char **av)
// {
// 	int mine;
// 	int theirs;

// 	if (ac == 2)
// 	{
// 		mine = ft_atoi(av[1]);
// 		theirs = atoi(av[1]);
// 		printf("mine: %d | theirs %d\n", mine, theirs);
// 	}
// 	return (0);
// }