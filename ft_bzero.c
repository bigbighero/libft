/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:25:29 by roferrei          #+#    #+#             */
/*   Updated: 2022/07/01 23:54:47 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int    main(void)
// {
//     int    i;
//     char    s[20] = "aaaaaaa";
//     char    sbis[20] = "aaaaaaa";

//     printf("teste de ft_bzero:\n");
//     strcpy(sbis, s);
//     bzero(s, 3);
//     ft_bzero(sbis, 3);
//     i = 0;
//     while (i < 5 && s[i] == sbis[i])
//         i++;
//     if(i==5)
//         printf("OK\n");
//     else
//         printf("Failed : expected [%c][%c][%c][%c][%c], \n"
//         "got [%c][%c][%c][%c][%c].\n", s[0], s[1], s[2], s[3], s[4], sbis);
// }
