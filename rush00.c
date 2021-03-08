/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvernon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 12:50:26 by rvernon           #+#    #+#             */
/*   Updated: 2020/09/13 15:42:05 by rvernon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_o(int x, int y, int i, int j)
{
	if ((i == 1 && j == 1) || (i == 1 && j == x) ||
	(i == y && j == 1) || (i == y && j == x))
	{
		ft_putchar('o');
	}
}

void	ft_print_pipe(int x, int y, int i, int j)
{
	if ((j == 1 && i > 1 && i < y) || (j == x && i > 1 && i < y))
	{
		ft_putchar('|');
	}
}

void	ft_print_minus(int x, int y, int i, int j)
{
	if ((i == 1 && j > 1 && j < x) || (i == y && j > 1 && j < x))
	{
		ft_putchar('-');
	}
}

void	ft_print_space(int x, int y, int i, int j)
{
	if ((i > 1 && j > 1) && (i < y && j < x))
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (i <= y)
	{
		while (j <= x)
		{
			ft_print_o(x, y, i, j);
			ft_print_pipe(x, y, i, j);
			ft_print_minus(x, y, i, j);
			ft_print_space(x, y, i, j);
			j++;
		}
		j = 1;
		ft_putchar('\n');
		i++;
	}
}
