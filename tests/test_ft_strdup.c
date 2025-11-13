/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 21:02:10 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/13 21:14:17 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*src;
	char	*dest;

	printf("=== TESTING: FT_STRDUP ===\n");
	src = "hello";
	dest = ft_strdup(src);
	if (ft_strncmp(dest, src, ft_strlen(src)) == 0)
		printf("OK - Test PASSED for regular string [%s]\n", dest);
	else
		printf("KO - Test FAILED for regular string [%s]\n", dest);
	src = "";
	dest = ft_strdup(src);
	if (ft_strncmp(dest, src, ft_strlen(src)) == 0)
		printf("OK - Test PASSED for empty string [%s]\n", dest);
	else
		printf("KO - Test FAILED for empty string [%s]\n", dest);
	src = " ";
    dest = ft_strdup(src);
    if (ft_strncmp(dest, src, ft_strlen(src)) == 0)
		printf("OK - Test PASSED for string == ' ' [%s]\n", dest);
	else
		printf("KO - Test FAILED for string == ' ' [%s]\n", dest);
	return (0);
}

