/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 13:58:18 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/11 15:01:34 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int iter;

	iter = 0;
	while (iter <= n)
	{
		*(dest + iter) = *(src + iter);
		iter++;
	}
	return (dest);
}
