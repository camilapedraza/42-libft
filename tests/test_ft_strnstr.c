/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:30:17 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/11 17:35:57 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*big;
	const char	*little;
	char		*ret_val;

	big = "mississipi";
	little = "issip";
	printf("=== TESTING: FT_STRNSTR ===\n");
	ret_val = ft_strnstr(big, little, 8);
	if (ret_val == NULL)
		printf("OK - Test PASSED for little not in len [%s]\n", ret_val);
	else
		printf("KO - Test FAILED for little not in len [%s]\n", ret_val);
	ret_val = ft_strnstr(big, little, 9);
	if (strcmp(ret_val, "issipi") == 0)
		printf("OK - Test PASSED for little in big in len [%s]\n", ret_val);
	else
		printf("KO - Test FAILED for little in big in len [%s]\n", ret_val);
	ret_val = ft_strnstr(big, "\0", 10);
	if (strcmp(ret_val, big) == 0)
		printf("OK - Test PASSED for len = 0 [%s]\n", ret_val);
	else
		printf("KO - Test FAILED for len = 0 [%s]\n", ret_val);
	return (0);
}
