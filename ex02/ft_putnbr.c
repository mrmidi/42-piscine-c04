/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabeln <ashabeln@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:45:25 by ashabeln          #+#    #+#             */
/*   Updated: 2022/02/11 12:45:25 by ashabeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	num;
	char	inttochar;

	num = (long) nb;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num / 10)
		ft_putnbr(num / 10);
	inttochar = ('0' + num % 10);
	write(1, &inttochar, 1);
}
