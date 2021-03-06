/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/01 22:59:47 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/01 23:12:01 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(void)
{
	int		i;
	int		j;

	i = -1;
	while ((j = -1) && i++ <= 9)
		while (j++ <= 9)
			printf("%i^%i = %i\n", (i - 1), (j - 1),
			ft_recursive_power((i - 1), (j - 1)));
	return (0);
}
