/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:25:26 by roferrei          #+#    #+#             */
/*   Updated: 2022/06/15 10:03:19 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
1) handle white spaces
2) handle the sign
3) handle the conversion
*/

// #include <stdio.h>
// #include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
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
