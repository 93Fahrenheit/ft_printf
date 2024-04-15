/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <fel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 21:53:03 by fel-abbo          #+#    #+#             */
/*   Updated: 2024/01/24 19:20:23 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int n, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (n < 16)
		*len += ft_putchar(base[n]);
	else
	{
		ft_puthexa(n / 16, len);
		ft_puthexa(n % 16, len);
	}
	return (*len);
}

int	ft_puthexaptr(unsigned long int nb, int *len)
{
	char		*base;

	base = "0123456789abcdef";
	if (nb < 16)
		*len += ft_putchar(base[nb]);
	else
	{
		ft_puthexaptr(nb / 16, len);
		ft_puthexaptr(nb % 16, len);
	}
	return (*len);
}

int	ft_puthexa_up(unsigned int n, int *len)
{
	char			*base;

	base = "0123456789ABCDEF";
	if (n < 16)
		*len += ft_putchar(base[n]);
	else
	{
		ft_puthexa_up(n / 16, len);
		ft_puthexa_up(n % 16, len);
	}
	return (*len);
}

int	ft_putptr(void *ptr, int *len)
{
	unsigned long int	adresse;

	adresse = (unsigned long int)ptr;
	if (!adresse)
		return (*len += ft_putstr("(nil)"));
	*len += ft_putstr("0x");
	ft_puthexaptr(adresse, len);
	return (*len);
}
