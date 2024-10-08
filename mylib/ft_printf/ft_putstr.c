/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhrayza <hkhrayza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:29:36 by hkhrayza          #+#    #+#             */
/*   Updated: 2024/08/08 17:29:39 by hkhrayza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	n;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	n = ft_strlenn(s);
	write (1, s, n);
	return (n);
}
