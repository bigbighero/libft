/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:26:15 by roferrei          #+#    #+#             */
/*   Updated: 2022/06/28 01:26:33 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// int main (void)
// {
// 	char a[20] = "Programa";
// 	char b[20] = {'P','r','o','g','r','a','m', '\0'};
// 	printf("Lenght of string a = %zu \n", ft_strlen(a));
// 	printf("Lenght of string b = %zu \n", ft_strlen(b));
	
// 	printf("Lenght of string a = %zu \n", strlen(a));
// 	printf("Lenght of string b = %zu \n", strlen(b));
// 	return (0);
// }