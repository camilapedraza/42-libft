/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 19:56:18 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/13 20:34:04 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*ptr;

	printf("=== TESTING: FT_CALLOC ===\n");
	ptr = ft_calloc(5, 5);
	if (*ptr == 0 && *(ptr + 24) == 0)
		printf("OK - Test PASSED for (5, 5) - Allocated 25B [%d]\n", *ptr);
	else
		printf("KO - Test FAILED for (5, 5) - Allocated 25B [%d]\n", *ptr);
	ptr = ft_calloc(5, -5);
	if (ptr == 0)
		printf("OK - Test PASSED for (5, -5) - Null (> SizeMax) [%p]\n", ptr);
	else
		printf("KO - Test FAILED for (5, -5) - Null (> SizeMax) [%p]\n", ptr);
	ptr = ft_calloc(0, 5);
	if (ptr != 0 && *ptr == 0)
		printf("OK - Test PASSED for (0, 5) - Allocated 1B [%d]\n", *ptr);
	else
		printf("KO - Test FAILED for (0, 5) - Allocated 1B [%d]\n", *ptr);
	return (0);
}
