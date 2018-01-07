/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/27 22:04:19 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/07 19:35:31 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	t_suitcase	s_c;
	int			ret;

	ret = 0;
	init_suitcase(&s_c);
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			init_suitcase(&s_c);
			get_attributs(&s_c, ++str);
			print(&ap, &s_c);
			str += s_c.length;
		}
		else
			ft_putchar(*str++);
	}
	va_end(ap);
	return (ret);
}
