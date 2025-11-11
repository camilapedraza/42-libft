/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:26:55 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/10 19:10:47 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	size_t	result;

	printf("=== TESTING: FT_STRLEN ===\n");
	result = ft_strlen("hello");
	if (result == 5)
		printf("OK - Test PASSED for string: \"hello\" [%zu]\n", result);
	else
		printf("KO - Test FAILED for string: \"hello\" [%zu]\n", result);
	result = ft_strlen("\0");
	if (result == 0)
		printf("OK - Test PASSED for string: \"\\0\" [%zu]\n", result);
	else
		printf("KO - Test FAILED for string: \"\\0\" [%zu]\n", result);
	return (0);
}
