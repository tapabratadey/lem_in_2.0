/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 18:38:33 by tadey             #+#    #+#             */
/*   Updated: 2018/04/01 18:38:35 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_array(void **array)
{
	int i;

	i = -1;
	while (array[++i])
		ft_memdel((void **)&array[i]);
	free(array);
}
