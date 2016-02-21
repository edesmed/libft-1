/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/21 18:17:25 by ggane             #+#    #+#             */
/*   Updated: 2016/02/21 19:32:53 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*tmp;

	if ((tmp = (void*)malloc(sizeof(void) * size)))
	{
		ft_bzero(tmp, size);
		return (tmp);
	}
	else
		return (NULL);
}
