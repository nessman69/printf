/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test_s.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/07 20:55:00 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 17:51:59 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	test_s()
{
	
	printf("[%S]ar\n", L"nessimë");
	ft_printf("[%S]ar\n\n", L"nessimë");
	
	/*printf("[%0 +8.15s]ar\n", "nessim");
	ft_printf("[%0 +8.15s]ar\n\n", "nessim");

	printf("[%0 +8.1s]ar\n", "nessim");
	ft_printf("[%0 +8.1s]ar\n\n", "nessim");
	
	printf("[%0 +8.s]ar\n", "nessim");
	ft_printf("[%0 +8.s]ar\n\n", "nessim");
	
	printf("[%0 +5.s]ar\n", "nessim");
	ft_printf("[%0 +5.s]ar\n\n", "nessim");

	printf("[%0 +5.3s]ar\n", "nessim");
	ft_printf("[%0 +5.3s]ar\n\n", "nessim");

	printf("[%0 -+5.3s]ar\n", "nessim");
	ft_printf("[%0 -+5.3s]ar\n\n", "nessim");
	
	printf("[% -+5.3s]ar\n", "nessim");
	ft_printf("[% -+5.3s]ar\n\n", "nessim");
*/}