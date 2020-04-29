/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathaliekhouri <nathaliekhouri@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 12:21:52 by gadoglio          #+#    #+#             */
/*   Updated: 2020/04/29 15:39:011 by nathaliekho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_strlen(const char *str)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (str[i++] != '\0')
	{
		length++;
	}
	return (length);
}
