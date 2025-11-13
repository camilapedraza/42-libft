/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:41:13 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/13 16:38:03 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[5];
	char	s2[5];
	int		arr[4];
	int		i;

	i = 0;
	while (i < 4)
	{
		s1[i] = 65 + i;
		s2[i] = 65 + i + 1;
		arr[i] = 1 + i;
		i++;
	}
	printf("=== TESTING: FT_MEMCMP ===\n");
	i = ft_memcmp(s1, s2, 3);
	if (i == memcmp(s1, s2, 3))
		printf("OK - Test PASSED for comparing chars [%d]\n", i);
	else
		printf("KO - Test FAILED for comparing chars [%d]\n", i);
	i = ft_memcmp(arr, arr + 2, 1);
	if (i == memcmp(arr, arr + 2, 1))
		printf("OK - Test PASSED for comparing ints [%d]\n", i);
	else
		printf("KO - Test FAILED for comparing ints [%d]\n", i);
	return (0);
}
