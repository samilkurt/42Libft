/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhkurt <muhkurt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:58:35 by muhkurt           #+#    #+#             */
/*   Updated: 2023/01/14 18:28:21 by muhkurt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>

int main()
{
	
	int y[5] = {1,2,3,4};

	char x[5] = "asli";
	ft_memcpy(y, x, 4);
	
	int i;

	i = 0;
	while (i < 4)
	{
		printf("%d\n", y[i]);
		i++;
	}
}