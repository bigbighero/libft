/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:25:30 by roferrei          #+#    #+#             */
/*   Updated: 2022/07/20 01:47:12 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*n;
	int		a;

	a = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (a / nmemb != size)
		return (NULL);
	n = malloc(a);
	if (n == NULL)
		return (n);
	ft_bzero(n, a);
	return (n);
}
