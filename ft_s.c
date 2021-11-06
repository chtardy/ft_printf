/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:57:26 by ctardy            #+#    #+#             */
/*   Updated: 2021/11/05 19:23:21 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_s(char *str)
{
	int	c;
	int	i;

	i = 0;
	c = 0;
	if (!(str))
	{
		return (write (1, "(null)", 6));
	}
	while (str[i])
	{
		write(1, &str[i++], 1);
		c++;
	}
	return (c);
}