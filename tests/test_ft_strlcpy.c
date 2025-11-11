/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:12:48 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/11 13:52:59 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*dst;
	size_t	ret_val;

	dst = (char *) malloc(sizeof(char) * 12);
	printf("=== TESTING: FT_STRLCPY ===\n");
	ret_val = ft_strlcpy(dst, "hello", 4);
	if (ret_val == ft_strlen("hello"))
		printf("OK - Test PASSED for string: \"hello\" [%zu]\n", ret_val);
	else
		printf("KO - Test FAILED for string: \"hello\" [%zu]\n", ret_val);
	ret_val = ft_strlcpy(dst, "goodbye", 0);
	if (ret_val == ft_strlen("goodbye"))
		printf("OK - Test PASSED for string: \"goodbye\" [%zu]\n", ret_val);
	else
		printf("KO - Test FAILED for string: \"goodbye\" [%zu]\n", ret_val);
	free(dst);
	return (0);
}
