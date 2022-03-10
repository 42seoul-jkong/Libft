/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkong <jkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:39:50 by jkong             #+#    #+#             */
/*   Updated: 2022/03/10 16:04:09 by jkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_isspace(int c)
{
	return (011 <= c && c <= 015 || c == ' ');
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	number;

	while (_isspace(*str))
		str++;
	sign = 0;
	if (*str == '+' || *str == '-')
		sign = *str++ == '-';
	number = 0;
	while (*str && ft_isdigit(*str))
		number = 10 * number + (((sign ^ 1) << 1) - 1) * (*str++ - '0');
	return (number);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	final_size;
	void	*ptr;

	final_size = count * size;
	ptr = malloc(final_size);
	if (ptr)
		ft_bzero(ptr, final_size);
	return (ptr);
}