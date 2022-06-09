/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:15:20 by eabdelha          #+#    #+#             */
/*   Updated: 2022/05/22 14:45:58 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

void	fill_position_matrix(t_elements *elem)
{
	int	i;

	i = -1;
	t_cogo  o;
	t_cogo  null;
	null = (t_cogo){};
	elem->m_pos = get_transf_matrix(elem->c->orient, elem->c->pos);
    update_cogo(elem, elem->m_pos);
	while ((size_t)++i < elem->elem_nbr.cy_nbr)
	{
		o = (t_cogo){};
		elem->cy[i].m_pos = get_transf_matrix(elem->cy[i].orient,\
		elem->cy[i].pos);
		update_cogo_element(&o, elem->cy[i].m_pos);
		add_sub_vectors_2d(&elem->cy[i].o_c, o, null, -1);
		elem->cy[i].z_o = o.z;
	}
}

void	init_ray(t_elements *elem, t_cogo *ray)
{
	ray->x = -tan((elem->c->fov / 2) * (M_PI / 180));
	ray->y = -ray->x;
	ray->z = 1;
}

void	fill_t_buf_i(t_buf_i *i, int endian)
{
	if (!endian)
	{
		i->i0 = 0;
		i->i1 = 1;
		i->i2 = 2;
		i->i3 = 3;
	}
	else
	{
		i->i0 = 3;
		i->i1 = 2;
		i->i2 = 1;
		i->i3 = 0;
	}
}