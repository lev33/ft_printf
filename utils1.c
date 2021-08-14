/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligeorgi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 11:33:18 by ligeorgi          #+#    #+#             */
/*   Updated: 2019/12/19 11:33:32 by ligeorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	if (src != dst)
	{
		a = (unsigned char*)src;
		b = (unsigned char*)dst;
		while (n--)
			*b++ = *a++;
	}
	return (dst);
}

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if (!(mem = malloc(size)))
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}

char	*ft_strnew(size_t size)
{
	if (size == (size_t)-1)
		return (NULL);
	return ((char*)ft_memalloc(size + 1));
}

size_t	ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *a;

	a = (unsigned char *)b;
	while (len--)
		*a++ = (unsigned char)c;
	return (b);
}
