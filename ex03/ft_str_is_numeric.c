/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 21:06:02 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/12 21:22:40 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int i;
	int k;

	i = 0;
	k = 1;
	while (*(str + i))
	{
		if (!(*(str + i) >= '0' && *(str + i) <= '9'))
			k = 0;
		i++;
	}
	return (k);
}
