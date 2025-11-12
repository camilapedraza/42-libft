/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 20:46:36 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/12 21:06:41 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int		me_14[4];
	int		me_58[4];
	char	me_up[5];
	int		i;

	i = 0;
	while (i < 4)
	{
		me_up[i] = 65 + i;
		me_14[i] = 1 + i;
		me_58[i] = 5 + i;
		i++;
	}
	printf("=== TESTING: FT_MEMCPY ===\n");
	ft_memcpy(me_14, me_58, sizeof(me_14));
	if (me_14[0] == 5 && me_14[3] == 8)
		printf("OK - Test PASSED for copy between int arr [%d]\n", *me_14);
	else
		printf("KO - Test FAILED for copy between int arr [%d]\n", *me_14);
	ft_memcpy(me_14, me_up, sizeof(me_up));
	if (*((char *)me_14) == 65 && *((char *)me_14 + 3) == 68)
		printf("OK - Test PASSED for copy from char to int [%c]\n", *me_14);
	else
		printf("KO - Test FAILED for copy between char arr [%c]\n", *me_14);
	return (0);
}
