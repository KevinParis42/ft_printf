/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 15:26:10 by kparis            #+#    #+#             */
/*   Updated: 2020/01/10 17:11:10 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int		ft_printf(const char *fmt, ...)
{
	t_struct *info;

	if (!(info = (t_struct*)malloc(sizeof(t_struct))))
		return (-1);
	info->fmt = fmt;
	info = ft_initialize(info);
	if (fmt)
	{
		va_start(info->arg, fmt);
		info->len = ft_parsers(info);
		va_end(info->arg);
	}
	free(info);
	return (info->len);
}
