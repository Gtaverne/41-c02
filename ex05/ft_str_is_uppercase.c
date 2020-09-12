/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 22:11:36 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/12 22:18:03 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int i;
	int k;

	i = 0;
	k = 1;
	while (*(str + i))
	{
		if (!(*(str + i) >= 'A' && *(str + i) <= 'Z'))
			k = 0;
		i++;
	}
	return (k);
}
