/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:05:56 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/11 13:53:32 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char	*s1;
	const char	*s2;
	int			ret_val;

	s1 = "ABC";
	s2 = "AB\xFF";
	printf("=== TESTING: FT_STRNCMP ===\n");
	ret_val = ft_strncmp(s1, s2, 3);
	if (ret_val == strncmp(s1, s2, 3))
		printf("OK - Test PASSED for \"ABC\", \"AB\\xFF\", 3 [%d]\n", ret_val);
	else
		printf("KO - Test FAILED for \"ABC\", \"AB\\xFF\", 3 [%d]\n", ret_val);
	ret_val = ft_strncmp(s1, s2, 0);
	if (ret_val == strncmp(s1, s2, 0))
		printf("OK - Test PASSED for \"ABC\", \"AB\\xFF\", 0 [%d]\n", ret_val);
	else
		printf("KO - Test FAILED for \"ABC\", \"AB\\xFF\", 0 [%d]\n", ret_val);
	return (0);
}
