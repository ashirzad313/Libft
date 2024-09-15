/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:56:51 by ashirzad          #+#    #+#             */
/*   Updated: 2024/09/15 18:16:35 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	uc;

	uc = (unsigned char)c;
	ptr = (unsigned char *)b;
	while (len > 0)
	{
		*ptr = uc;
		ptr++;
		len--;
	}
	return (b);
}
