/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalecia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 16:25:48 by lalecia           #+#    #+#             */
/*   Updated: 2020/09/13 18:59:41 by lalecia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_symbols(int x, int y, int a, int b)
{
	if ((a == 1 && b == 1) || (a == x && b == y && y != 1 && x != 1))
	{
		ft_putchar('/');
	}
	else if ((a == x && b == 1) || (a == 1 && b == y))
	{
		ft_putchar('\\');
	}
	else if (a > 1 && a < x && b > 1 && b < y)
		ft_putchar(' ');
	else
		ft_putchar('*');
}

void	rush(int x, int y)
{
	int a;
	int b;

	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			ft_print_symbols(x, y, a, b);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
