/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 22:20:31 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/12 22:23:22 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int i;
	int k;

	i = 0;
	k = 1;
	while (*(str + i))
	{
		if (!(*(str + i) >= ' ' && *(str + i) <= '~'))
			k = 0;
		i++;
	}
	return (k);
}