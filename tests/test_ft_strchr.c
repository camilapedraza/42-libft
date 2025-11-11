/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:38:24 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/11 15:12:24 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*s;
	char		*ret_val;

	s = "ABC";
	printf("=== TESTING: FT_STRCHR ===\n");
	ret_val = ft_strchr(s, 'B');
	if (ret_val == strchr(s, 'B'))
		printf("OK - Test PASSED for \"B\" in \"ABC\" [%c]\n", *ret_val);
	else
		printf("KO - Test FAILED for \"B\" in \"ABC\" [%c]\n", *ret_val);
	ret_val = ft_strchr(s, '\0');
	if (ret_val == strchr(s, '\0'))
		printf("OK - Test PASSED for \"\\0\", in \"ABC\", 0 [%c]\n", *ret_val);
	else
		printf("KO - Test FAILED for \"\\0\", in \"ABC\", 0 [%c]\n", *ret_val);
	ret_val = ft_strchr(s, 'X');
	if (ret_val == strchr(s, 'X'))
		printf("OK - Test PASSED for \"X\", in \"ABC\", 0 [%s]\n", ret_val);
	else
		printf("KO - Test FAILED for \"X\", in \"ABC\", 0 [%s]\n", ret_val);
	return (0);
}
