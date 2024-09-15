/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:02:11 by ashirzad          #+#    #+#             */
/*   Updated: 2024/09/15 18:16:05 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isascii(int c)
{
	int	result;

	result = 0;
	if (c >= 0 && c <= 127)
	{
		result = 1;
	}
	return (result);
}
