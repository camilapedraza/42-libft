/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:38:52 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/11 18:07:06 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str;
	int		rval;

	printf("=== TESTING: FT_ATOI ===\n");
	str = "000780292929483649";
	rval = ft_atoi(str);
	if (rval == atoi(str))
		printf("OK - Test PASSED for str > MAXINT with lead 0 [%d]\n", rval);
	else
		printf("KO - Test FAILED for str > MAXINT with lead 0 [%d]\n", rval);
	str = "-2147483648";
	rval = ft_atoi(str);
	if (rval == atoi(str))
		printf("OK - Test PASSED for str = MININT with lead - [%d]\n", rval);
	else
		printf("KO - Test FAILED for str = MININT with lead - [%d]\n", rval);
	str = "-+a09";
	rval = ft_atoi(str);
	if (rval == atoi(str))
		printf("OK - Test PASSED for leading '-+a' [%d]\n", rval);
	else
		printf("KO - Test FAILED for leading '-+a' [%d]\n", rval);
	return (0);
}
