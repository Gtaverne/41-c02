/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 13:29:34 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/12 21:16:54 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int iter;

	iter = 0;
	while (*(src + iter) != '\0')
	{
		*(dest + iter) = *(src + iter);
		iter++;
	}
	*(dest + iter) = '\0';
	return (dest);
}
