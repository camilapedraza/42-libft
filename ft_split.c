/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:52:59 by mpedraza          #+#    #+#             */
/*   Updated: 2025/11/14 20:55:45 by mpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void cleanup(char **arr)
{
	while(*arr)
	{
		free(*arr);
		arr++;
	}
	// not working: free(arr);
}

static char	**fill_array(char **arr, char const *s, char c, size_t size)
{
	int	i;
	int	j;
	int	len;
	int	x;

	x = 0;
	i = 0;
	while (x < size - 1)
	{
		while (s[i] && s[i] == c)
			i++;
		j = i + 1;
		while (s[j] && s[j] != c)
			j++;
		len = j - i + 1;
		arr[x] = malloc(sizeof(char) * len + 1);
		if (!arr[x])
			return (NULL);
		ft_strlcpy(arr[x], (s+i), len);
		i = j + 1;
		x++;
	}
	arr[x] = NULL;
	return (arr);
}

static size_t	array_size(char const *s, char c)
{
	size_t size;

	size = 0;
	while (*s)
	{
		if (*s != c && (!*(s+1) || *(s+1) == c))
			size++;
		s++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	size_t	size;
	char	**array;

	if (!s)
        return (ft_calloc(1, 1));
	size = array_size(s, c) + 1;
	array = malloc(sizeof(char *) * size);
	if (!array)
		return (NULL);
	if (fill_array(array, s, c, size))
		return (array);
	cleanup(array);
	return (NULL);
}
/*
int main() {
    char *s;
    char c;
    char **array;
    int i;

    s = "XxxxhixxxmyxxxnamexisxXxxx";
    c = 'x';
    i = 0;
    array =  ft_split(s, c);
    while (*array)
    {
        printf("%s\n", *array);
        array++;
    }
    return 0;
}*/
