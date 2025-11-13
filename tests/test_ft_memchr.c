/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:09:38 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/13 16:37:11 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		a[6];
	char	c[7];
	int		i;
	char	*ptr1;

	i = 0;
	while (i < 7)
	{
		a[i] = 0 + i;
		c[i] = 65 + i;
		i++;
	}
	printf("=== TESTING: FT_MEMCHR ===\n");
	ptr1 = ft_memchr(c, 'B', 5);
	if (ptr1 == (char *)(memchr(c, 'B', 5)))
		printf("OK - Test PASSED for 'B' in str [%s]\n", ptr1);
	else
		printf("KO - Test FAILED for 'B' in str [%s]\n", ptr1);
	ptr1 = ft_memchr(a, 2, 9);
	if (ptr1 == (char *)(memchr(a, 2, 9)))
		printf("OK - Test PASSED for 2 in int [%d]\n", *ptr1);
	else
		printf("KO - Test FAILED for 2 in int [%d]\n", *ptr1);
	return (0);
}
