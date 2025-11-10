/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <mpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:38:33 by mpedraza          #+#    #+#             */
/*   Updated: 2025/09/25 18:12:02 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	si;
	unsigned int	di;
	unsigned int	dlen;
	unsigned int	slen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	di = dlen;
	si = 0;
	if (size == 0)
		return (slen);
	if (size <= dlen)
		return (slen + size);
	while (src[si] && si < (size - dlen - 1))
	{	
		dest[di] = src[si];
		di++;
		si++;
	}	
	dest[di] = '\0';
	return (slen + dlen);
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char src[8] = "bonjour";
	char dest[9] = "aurevoir";
	char src1[8] = "bonjour";
    char dest1[9] = "aurevoir";
	size_t size = 4;
	
	printf("======orig======\n"); //
    printf("%zu\n", strlcat(dest, src, size));//
    printf("%s\n", dest); //
	printf("%s\n", src); //
	printf("%lu\n", sizeof(dest)); //
	printf("======mine======\n"); //
	printf("%d\n", ft_strlcat(dest1, src1, size));//
    printf("%s\n", dest1); //
	printf("%s\n", src1); //
	printf("%lu\n", sizeof(dest1)); //
}*/
