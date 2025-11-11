/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:38:41 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/11 18:39:27 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;
	char	ret_val;

	printf("=== TESTING: FT_TOLOWER ===\n");
	c = 'X';
	ret_val = ft_tolower(c);
	if (ret_val == tolower(c))
		printf("OK - Test PASSED for \"X\" [%c]\n", ret_val);
	else
		printf("KO - Test FAILED for \"X\" [%c]\n", ret_val);
	c = '[';
	ret_val = ft_tolower(c);
	if (ret_val == tolower(c))
		printf("OK - Test PASSED for \"[\" [%c]\n", ret_val);
	else
		printf("KO - Test FAILED for \"[\" [%c]\n", ret_val);
	return (0);
}
