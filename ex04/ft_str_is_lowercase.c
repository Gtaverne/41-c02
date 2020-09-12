/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 21:23:39 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/12 21:47:46 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int i;
	int k;

	i = 0;
	k = 1;
	while (*(str + i))
	{
		if (!(*(str + i) >= 'a' && *(str + i) <= 'z'))
			k = 0;
		i++;
	}
	return (k);
}
