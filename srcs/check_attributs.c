/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   check_attributs.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/20 12:38:18 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/20 12:57:52 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	get_flag(t_suitcase *s_c, char c)
{
	if (c == '#')
		s_c->is_sharp = 1;
	else if (c == '0')
		s_c->is_zero = 1;
	else if (c == '+')
		s_c->is_plus = 1;
	else if (c == '-')
		s_c->is_minus = 1;
	else
		s_c->is_space = 1;
	s_c->position++;
}

void	get_width(va_list *ap, t_suitcase *s_c, const char *str)
{
	int nbr;

	nbr = 0;
	if (*str == '*')
	{
		if (s_c->type != 'n')
		{
			nbr = va_arg(*ap, int);
			if (nbr < 0)
			{
				s_c->width = -nbr;
				s_c->is_minus = 1;
			}
			else
				s_c->width = nbr;
		}
		else
			s_c->ret_nul = 1;
		s_c->position++;
	}
	else
	{
		s_c->width = ft_atoi(str);
		s_c->position = nbrlen(s_c->width, 10);
	}
}

void	get_size(t_suitcase *s_c, const char *str)
{
	if (*str == 'h')
	{
		if (*(str + 1) == 'h')
		{
			s_c->size = 'H';
			s_c->position++;
		}
		else
			s_c->size = 'h';
	}
	else if (*str == 'l')
		if (*(str + 1) == 'l')
		{
			s_c->size = 'L';
			s_c->position++;
		}
		else
			s_c->size = 'l';
	else if (*str == 'j')
		s_c->size = 'j';
	else
		s_c->size = 'z';
	s_c->position++;
}

void	get_prec(va_list *ap, t_suitcase *s_c, const char *str)
{
	int nbr;

	nbr = 0;
	s_c->is_precision = 1;
	if (*++str == '*')
	{
		nbr = va_arg(*ap, int);
		if (nbr < 0)
			s_c->is_precision = 0;
		else
			s_c->prec = nbr;
		s_c->position += 2;
	}
	else
	{
		s_c->prec = ft_atoi(str);
		if (s_c->prec == -1)
		{
			s_c->prec = 0;
			s_c->position = 1;
		}
		else
			s_c->position = nbrlen(s_c->prec, 10) + 1;
	}
}

void	get_type(t_suitcase *s_c, char c)
{
	if (c != 0)
		if (ft_strchr(TYPE, c))
		{
			s_c->length++;
			if (c == 'i')
				s_c->type = 'd';
			else
				s_c->type = c;
		}
}
