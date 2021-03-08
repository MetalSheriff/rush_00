/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 16:54:01 by ypeckled          #+#    #+#             */
/*   Updated: 2020/09/13 17:42:55 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_corner(int x, int y, int i, int j)
{
	if ((i == 1 && j == 1) || (i == 1 && j == x))
	{
		ft_putchar('A');
	}
	else if ((i == y && j == 1) || (i == y && j == x))
	{
		ft_putchar('C');
	}
}

void	ft_print_walls(int x, int y, int i, int j)
{
	if ((j == 1 && i > 1 && i < y) || (j == x && i > 1 && i < y) ||
		(i == 1 && j > 1 && j < x) || (i == y && j > 1 && j < x))
	{
		ft_putchar('B');
	}
}

void	ft_print_gaps(int x, int y, int i, int j)
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
			ft_print_corner(x, y, i, j);
			ft_print_walls(x, y, i, j);
			ft_print_gaps(x, y, i, j);
			j++;
		}
		j = 1;
		ft_putchar('\n');
		i++;
	}
}
