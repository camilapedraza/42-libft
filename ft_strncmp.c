/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <mpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:23:48 by mpedraza          #+#    #+#             */
/*   Updated: 2025/09/22 22:22:18 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (*s1 == *s2 && *s1 && i + 1 < n)
	{
		s1++;
		s2++;
		i++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
# include <string.h> 
# include <stdio.h>

int	main(void)
{
	char *s1;
	char *s2;
	unsigned int	i;

	s1 = "ABC"; // 65 65 0
	s2 = "AB\xFF"; // 65 65 65
	i = 0;

	printf("Original %d", strncmp(s1, s2, i));
	printf("\n");
	printf("My versn %d", ft_strncmp(s1, s2, i));

	return (0);
}*/
