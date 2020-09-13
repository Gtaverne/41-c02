/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 19:17:09 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/13 22:09:15 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr_non_printable(char *str);
void a_putchar(char c);
void buildbase(char *base);

void	a_putchar(char c)
{
	write(1, &c, 1);
}

void	buildbase(char *base)
{
	int i;

	i = 0;
	while (i < 10)
	{
		*(base + i) = '0' + i;
		i++;
	}
	i = 10;
	while (i < 16)
	{
		*(base + i) = 'a' + i - 10;
		i++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		iter;
	char	hexa_tab[16];

	iter = 0;
	buildbase(hexa_tab);
	while (*(str + iter))
	{
		if (*(str + iter) < 32 || *(str + iter) > 126)
		{
			write(1, "\\", 1);
			a_putchar(hexa_tab[*(str + iter) / 16]);
			a_putchar(hexa_tab[*(str + iter) % 16]);
		}
		else
			a_putchar(*(str + iter));
		iter++;
	}
}
