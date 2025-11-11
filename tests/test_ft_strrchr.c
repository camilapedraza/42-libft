/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:38:24 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/11 15:43:47 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*s;
	char		*rval;

	s = "B*B0B!";
	printf("=== TESTING: FT_STRRCHR ===\n");
	rval = ft_strrchr(s, 'B');
	if (rval == strrchr(s, 'B'))
		printf("OK - Test PASSED for \"B\" in \"B*B0B!\" [%s]\n", rval);
	else
		printf("KO - Test FAILED for \"B\" in \"B*B0B!\" [%s]\n", rval);
	rval = ft_strrchr(s, '\0');
	if (rval == strrchr(s, '\0'))
		printf("OK - Test PASSED for \"\\0\", in \"B*B0B!\" [%s]\n", rval);
	else
		printf("KO - Test FAILED for \"\\0\", in \"B*B0B!\" [%s]\n", rval);
	rval = ft_strrchr(s, '*');
	if (rval == strrchr(s, '*'))
		printf("OK - Test PASSED for \"*\", in \"B*B0B!\" [%s]\n", rval);
	else
		printf("KO - Test FAILED for \"*\", in \"B*B0B!\" [%s]\n", rval);
	return (0);
}
