/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:24:40 by rdolzi            #+#    #+#             */
/*   Updated: 2023/01/21 12:48:18 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	size_t	slen;

	ch = (char) c;
	slen = ft_strlen(s);
	while (slen >= 0)
	{
		if (s[slen] == ch)
			return ((char *)&s[slen]);
		slen--;
	}
	return (NULL);
}
