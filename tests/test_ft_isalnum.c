/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:15:37 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/10 19:07:48 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	an1;
	char	an2;
	int		result1;
	int		result2;

	an1 = '1';
	an2 = '0';
	printf("=== TESTING: FT_ISALNUM ===\n");
	result1 = ft_isalnum(an1);
	result2 = ft_isalnum(an2);
	if (result1 == 1 && result2 == 1)
		printf("OK - Test PASSED for characters: %c %c\n", an1, an2);
	else
		printf("KO - Test FAILED for characters: %c %c\n", an1, an2);
	an1 = '{';
	an2 = '/';
	result1 = ft_isalnum(an1);
	result2 = ft_isalnum(an2);
	if (result1 == 0 && result2 == 0)
		printf("OK - Test PASSED for characters: %c %c\n", an1, an2);
	else
		printf("KO - Test FAILED for characters: %c %c\n", an1, an2);
	return (0);
}
