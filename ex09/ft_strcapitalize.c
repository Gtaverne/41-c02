/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 23:48:02 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/13 21:51:31 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		if (!(*(str + i - 1) >= 'a' && *(str + i - 1) <= 'z'))
		{
			if (!(*(str + i - 1) >= 'A' && *(str + i - 1) <= 'Z'))
			{
				if ((*(str + i) >= 'a' && *(str + i) <= 'z'))
				{
					*(str + i) = *(str + i) + ('A' - 'a');
				}
			}
		}
		i++;
	}
	return (str);
}
