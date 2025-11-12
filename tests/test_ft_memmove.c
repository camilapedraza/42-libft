/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 20:46:36 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/12 22:36:17 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int		a[4];
	char	c[4];
	int		i;

	i = 0;
	while (i < 4)
	{
		a[i] = 1 + i;
		c[i] = 65 + i;
		i++;
	}
	printf("=== TESTING: FT_MEMMOVE ===\n");
	ft_memmove(a, (a + 1), 12);
	if (a[0] == 2 && a[1] == 3 && a[2] == 4 && a[3] == 4)
		printf("OK - Test PASSED for src>dest [%d %d %d]\n", a[0], a[1], a[2]);
	else
		printf("KO - Test FAILED for src>dest [%d %d %d]\n", a[0], a[1], a[2]);
	ft_memmove((c + 1), c, sizeof(c));
	if (c[1] == 65 && c[2] == 66 && c[3] == 67 && *((char *)(c + 4)) == 68)
		printf("OK - Test PASSED for src<dest [%s]\n", c);
	else
		printf("KO - Test FAILED for src<dest [%s]\n", c);
	return (0);
}
