/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:24:40 by rdolzi            #+#    #+#             */
/*   Updated: 2023/01/23 12:01:25 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	slen;

	slen = ft_strlen(s);
	if (c == 0)
		return ((char *)(s + slen));
	while (slen >= 0)
	{
		if (s[slen] == c)
			return ((char *)(s + slen));
		slen--;
	}
	return (NULL);
}
