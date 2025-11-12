/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:31:13 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/12 18:30:08 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int		me_i[2];
	char	me_c[2];

	printf("=== TESTING: FT_MEMSET ===\n");
	ft_memset(me_i, 90, sizeof(me_i));
	if (me_i[0] == 1515870810 && me_i[1] == 1515870810)
		printf("OK - Test PASSED for int arr set to 90 [%d]\n", *me_i);
	else
		printf("KO - Test FAILED for int arr set to 90 [%d]\n", *me_i);
    ft_memset(me_c, 90, sizeof(me_c));
	if (me_c[0] == 90 && me_c[1] == 90)
		printf("OK - Test PASSED for char arr set to 90 [%c]\n", *me_c);
	else
		printf("KO - Test FAILED for char arr set to 90 [%c]\n", *me_c);
	return (0);
}
