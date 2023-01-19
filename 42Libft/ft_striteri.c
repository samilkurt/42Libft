/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhkurt <muhkurt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:53:50 by muhkurt           #+#    #+#             */
/*   Updated: 2023/01/14 18:45:51 by muhkurt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
#include <stdio.h>
char ft_42(unsigned int a, char *c)
{
	*c = (ft_toupper(*c));
}
int main()
{
	char x[] = "dans";
	ft_strmapi(x, ft_42);
	printf("%s", x);
}