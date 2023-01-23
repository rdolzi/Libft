/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:06:57 by rdolzi            #+#    #+#             */
/*   Updated: 2023/01/23 18:52:39 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		s1len;
	int		s2len;
	char	*strjoin;

	i = -1;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	strjoin = (char *)malloc((s1len + s2len + 1) * sizeof(char));
	if (!strjoin)
		return (NULL);
	while (++i < s1len)
	{
		strjoin[i] = s1[i];
	}
	j = 0;
	while (j < s2len)
	{
		strjoin[i] = s2[j];
		i++;
		j++;
	}
	strjoin[i] = '\0';
	return (strjoin);
}
