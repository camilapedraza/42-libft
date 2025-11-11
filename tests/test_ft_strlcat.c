/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:12:48 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/11 13:55:17 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*dst;
	size_t	ret_val;
	size_t	slen;
	size_t	dlen;

	dst = (char *) malloc(sizeof(char) * 12);
	strcpy(dst, "hello");
	slen = ft_strlen("goodbye");
	dlen = ft_strlen(dst);
	printf("=== TESTING: FT_STRLCAT ===\n");
	ret_val = ft_strlcat(dst, "goodbye", 4);
	if (ret_val == slen + 4)
		printf("OK - Test PASSED for siz < dst [%zu]\n", ret_val);
	else
		printf("KO - Test FAILED for siz < dst [%zu]\n", ret_val);
	ret_val = ft_strlcat(dst, "goodbye", 13);
	if (ret_val == slen + dlen)
		printf("OK - Test PASSED for siz = dst + src + 1 [%zu]\n", ret_val);
	else
		printf("KO - Test FAILED for siz > dsr + src + 1 [%zu]\n", ret_val);
	free(dst);
	return (0);
}
