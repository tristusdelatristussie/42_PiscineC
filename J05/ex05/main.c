/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 08:42:46 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 07:01:02 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(void)
{
	char	s[25];

	strcpy(s, "Hello 2 World! abc...xyz");
	printf("%s\n", s);
	printf("%s\n", ft_strupcase(s));
	return (0);
}