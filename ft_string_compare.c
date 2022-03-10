/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_compare.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkong <jkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 21:03:46 by jkong             #+#    #+#             */
/*   Updated: 2022/03/08 22:49:15 by jkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && n > 0 && *s1++ == *s2++)
		n--;
	if (n > 0)
		return (*s1 - *s2);
	return (0);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		diff;
	size_t	i;

	diff = 0;
	i = 0;
	while (i < n)
	{
		diff = ((const char *)s1)[i] - ((const char *)s2)[i];
		if (diff)
			break ;
		i++;
	}
	return (diff);
}
