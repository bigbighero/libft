/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:26:07 by roferrei          #+#    #+#             */
/*   Updated: 2022/07/02 01:47:21 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	char	*point;
	size_t	i;

	i = 0;
	point = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (point == NULL)
		return (NULL);
	while (s[i])
	{
		point[i] = s[i];
		i++;
	}
	point[i] = '\0';
	return (point);
}
