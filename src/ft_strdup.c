/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:35:57 by ashirzad          #+#    #+#             */
/*   Updated: 2024/09/15 18:17:00 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(char *s1)
{
	int		count;
	char	*ptr;

	count = 0;
	ptr = (char *)malloc(ft_strlen(s1)+1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (s1[count] != '\0')
	{
		ptr[count] = s1[count];
		count++;
	}
	ptr[count] = '\0';
	return (ptr);
}
