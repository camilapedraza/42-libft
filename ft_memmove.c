/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:47:08 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/12 20:54:41 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	while (n--)
	{
		if (dest == src)
			break ;
		if (dest < src)
			*((char *)(dest - n - 1)) = *((char *)(src) - n - 1);
		if (dest > src)
			*((char *)(dest + n)) = *((char *)(src + n));
	}
	return (dest);
}
