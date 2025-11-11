/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:22:04 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/10 17:03:06 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	digit;
	char	nondigit;
	int		result;

	digit = '0';
	nondigit = '/';
	printf("=== TESTING: FT_ISDIGIT ===\n");
	result = ft_isdigit(digit);
	if (result == 1)
		printf("OK - Test PASSED for character: %c\n", digit);
	else
		printf("KO - Test FAILED for character: %c\n", digit);
	result = ft_isdigit(nondigit);
	if (result == 0)
		printf("OK - Test PASSED for character: %c\n", nondigit);
	else
		printf("KO - Test FAILED for character: %c\n", nondigit);
	return (0);
}
