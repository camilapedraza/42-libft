/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:30:54 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/11 18:40:02 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;
	char	ret_val;

	printf("=== TESTING: FT_TOUPPER ===\n");
	c = 'x';
	ret_val = ft_toupper(c);
	if (ret_val == toupper(c))
		printf("OK - Test PASSED for \"x\" [%c]\n", ret_val);
	else
		printf("KO - Test FAILED for \"x\" [%c]\n", ret_val);
	c = '{';
	ret_val = ft_toupper(c);
	if (ret_val == toupper(c))
		printf("OK - Test PASSED for \"{\" [%c]\n", ret_val);
	else
		printf("KO - Test FAILED for \"{\" [%c]\n", ret_val);
	return (0);
}
