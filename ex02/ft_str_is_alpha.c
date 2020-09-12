/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 20:26:04 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/12 21:19:00 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int i;
	int k;

	i = 0;
	k = 1;
	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			i++;
		else if (*(str + i) >= 'A' && *(str + i) <= 'Z')
			i++;
		else
			k = 0;
		i++;
	}
	return (k);
}
