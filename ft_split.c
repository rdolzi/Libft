/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:16:33 by rdolzi            #+#    #+#             */
/*   Updated: 2023/01/24 15:14:01 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
int	split_in_string(char c, char const *str)
{
	int	i;
	int	count;
	int	slen;

	i = 0;
	count = 0;
	slen = ft_strlen(str);
	while (str[i] && i < slen)
	{
		if (str[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	// ** alloco dopo che so quanti *
	char	**strsplit;

	strsplit = (char **)malloc((split_in_string(c, s)) * sizeof(char *));
	if (!strsplit)
		return (NULL);

}


int main()
{	

	char	*c = "ciao come staicic";	
	printf("%d", how_many_in_string('c',c));
}
