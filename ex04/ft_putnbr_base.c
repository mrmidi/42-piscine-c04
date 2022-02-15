/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabeln <ashabeln@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:41:25 by ashabeln          #+#    #+#             */
/*   Updated: 2022/02/14 13:41:25 by ashabeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	short	chars[127];
	int		i;

	i = 0;
	while (i < 127)
	{
		chars[i] = 0;
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		if (!(chars[(int) base[i]]))
		{
			chars[(int) base[i]] = 1;
			if (base[i] == '+' || base[i] == '-')
				return (0);
		}
		else
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

void	ft_putnbr_r(int nb, int base_num, char *base)
{
	long	num;

	num = (long) nb;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num / base_num)
		ft_putnbr_r(num / base_num, base_num, base);
	write(1, &base[num % base_num], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_num;

	base_num = check_base(base);
	if (base_num)
	{
		ft_putnbr_r(nbr, base_num, base);
	}
}
