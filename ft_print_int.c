/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_int.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/26 22:57:56 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/26 23:23:07 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_int(int nbr)
{
	ft_putnbr(nbr);
	return (int_len(nbr));
}
