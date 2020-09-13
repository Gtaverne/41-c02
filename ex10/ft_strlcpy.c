/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 17:48:28 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/13 21:54:50 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int len_str(char *str);

unsigned int	len_str(char *str)
{
	unsigned int l;

	l = 0;
	while (*(str + l) != 0)
	{
		l++;
	}
	return (l);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int result;
	unsigned int len_dest;
	unsigned int iter;

	result = len_str(src);
	len_dest = len_str(dest);
	if (size > 0 && size <= 1 + len_dest)
	{
		iter = 0;
		while (iter < size - 1)
		{
			*(dest + iter) = *(src + iter);
			iter++;
		}
		while (iter >= size - 1 && iter < len_dest)
		{
			*(dest + iter) = '\0';
			iter++;
		}
	}
	return (result);
}
