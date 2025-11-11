/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:22:04 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/10 18:22:16 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int		print;
	int		nonprint;
	int		result;

	print = '!';
	nonprint = 255;
	printf("=== TESTING: FT_ISPRINT ===\n");
	result = ft_isprint(print);
	if (result == 1)
		printf("OK - Test PASSED for character: %c\n", print);
	else
		printf("KO - Test FAILED for character: %c\n", print);
	result = ft_isprint(nonprint);
	if (result == 0)
		printf("OK - Test PASSED for character: %c\n", nonprint);
	else
		printf("KO - Test FAILED for character: %c\n", nonprint);
	return (0);
}
