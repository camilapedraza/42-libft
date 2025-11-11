/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:35:19 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/10 19:08:11 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	ascii7;
	int	ascii8;
	int	result;

	ascii7 = 126;
	ascii8 = 128;
	printf("=== TESTING: FT_ISASCII ===\n");
	result = ft_isascii(ascii7);
	if (result == 1)
		printf("OK - Test PASSED for character: %c\n", ascii7);
	else
		printf("KO - Test FAILED for character: %c\n", ascii7);
	result = ft_isascii(ascii8);
	if (result == 0)
		printf("OK - Test PASSED for character: %c\n", ascii8);
	else
		printf("KO - Test FAILED for character: %c\n", ascii8);
	return (0);
}
