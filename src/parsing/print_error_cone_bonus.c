/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error_cone.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:13:56 by eabdelha          #+#    #+#             */
/*   Updated: 2022/06/13 15:24:32 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

bool	print_error_cone(char iden)
{
	if (iden == CO_NBR_INFO)
		return (ft_putendl_fd("co : Invalid informations number!", 2), 1);
	else if (iden == CO_COGO)
		return (ft_putendl_fd("co : Invalid coordinates format!", 2), 1);
	else if (iden == CO_ORIENT)
		return (ft_putendl_fd("co : Invalid orientation vector format!", 2), 1);
	else if (iden == CO_DIAMETER)
		return (ft_putendl_fd("co : Invalid diameter format!", 2), 1);
	else if (iden == CO_HEIGHT)
		return (ft_putendl_fd("co : Invalid height format!", 2), 1);
	else if (iden == CO_RGB)
		return (ft_putendl_fd("co : Invalid RGB format!", 2), 1);
	return (0);
}