/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:24:59 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/08 17:47:25 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	alpha;
	char	nonalpha;
	int		result;

	alpha = 'a';
	nonalpha = '{';
	printf("=== TESTING: FT_ISALPHA ===\n");
	result = ft_isalpha(alpha);
	if (result == 1)
		printf("OK - Test PASSED for character: %c\n", alpha);
	else
		printf("KO - Test FAILED for character: %c\n", alpha);
	result = ft_isalpha(nonalpha);
	if (result == 0)
		printf("OK - Test PASSED for character: %c\n", nonalpha);
	else
		printf("KO - Test FAILED for character: %c\n", nonalpha);
	return (0);
}
