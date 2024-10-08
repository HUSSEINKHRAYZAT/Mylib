/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhrayza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 14:48:36 by hkhrayza          #+#    #+#             */
/*   Updated: 2024/07/14 14:48:40 by hkhrayza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*str_dest;
	char			*str_src;

	str_dest = (char *)dest;
	str_src = (char *)src;
	if (str_dest > str_src)
	{
		while (n--)
			str_dest[n] = str_src[n];
	}
	else if (str_dest < str_src)
		ft_memcpy(dest, src, n);
	return (dest);
}
