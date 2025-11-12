/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:28:27 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/12 19:39:47 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	int		me_i[2];
	char	me_c[2];
	int		i;

	i = 0;
	while (i < 2)
	{
		me_i[i] = 1 + i;
		me_c[i] = 65 + i;
		i++;
	}
	printf("=== TESTING: FT_BZERO ===\n");
	ft_bzero(me_i, sizeof(me_i));
	if (me_i[0] == 0 && me_i[1] == 0)
		printf("OK - Test PASSED for int arr bzeroed [%d]\n", *me_i);
	else
		printf("KO - Test FAILED for int arr bzeroed [%d]\n", *me_i);
	ft_bzero(me_c, sizeof(me_c));
	if (!me_c[0] && !me_c[1])
		printf("OK - Test PASSED for char arr bzeroed [%d]\n", *me_c);
	else
		printf("KO - Test FAILED for char arr bzeroed [%d]\n", *me_c);
	return (0);
}
