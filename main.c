/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 13:17:34 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/13 00:10:51 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
#include "ex09/ft_strcapitalize.c"

void new_ex(int * exo)
{
	printf("\n_________________\nNew exo :%d \n", *exo );
	(*exo)++;
}

int main()
{
	int ex = 0;

	new_ex(&ex);
	char dest[150] = {0};
	char src[] =  "I want to break free";
	printf("Source: %s\n", src);
	printf("Return of the function itself: %s\n", ft_strcpy(dest, src));
	printf("Return of the modified param: %s\n", dest);

	new_ex(&ex);
	char dest2[150] = {0};
	char src2[] = "He said burn them all";
	unsigned int usk = 10;
	printf("Source: %s\n", src2);
	printf("Return of the function itself: %s\n", ft_strncpy(dest2, src2, usk));
	printf("Return of the modified param: %s\n", dest2);
	
	new_ex(&ex);
	char ex2tst[] = "bond,agent007";
	char ex2[] = "Youpie";
	printf("\n test 1 : %s : %d", ex2tst, ft_str_is_alpha(ex2tst));
	printf("\n test 2 : %s : %d", ex2, ft_str_is_alpha(ex2));

	new_ex(&ex);
	printf("\n test 1 : %s : %d", "50", ft_str_is_numeric("50"));
	printf("\n test 2 : %s : %d", ex2, ft_str_is_numeric(ex2));
	
	new_ex(&ex);	
	printf("\n test 1 : %s : %d", ex2, ft_str_is_lowercase(ex2));
	printf("\n test 2 : %s : %d", "50", ft_str_is_lowercase("50"));
	

	new_ex(&ex);	
	printf("\n test 1 : %s : %d", ex2, ft_str_is_uppercase(ex2));
	printf("\n test 2 : %s : %d", "BANZAIIII", ft_str_is_uppercase("BANZAIIII"));
	
	new_ex(&ex);	
	printf("\n test 1 : %s : %d", "BANZ AIIII", ft_str_is_printable("BANZ  AIIII"));
	printf("\n test 2 : %s : %d", "tait nucleus \n", ft_str_is_printable("tait nucleus \n"));
	
	new_ex(&ex);		
	printf("%s\n", ex2);
	printf("\n test 1 : %s : %s", ex2, ft_strupcase(ex2));
	char exMAJ[] = "restons calmes!";
	printf("\n test 2 : %s : %s", exMAJ, ft_strupcase(exMAJ));
	
	new_ex(&ex);

	printf("%s\n", ex2);
	printf("\n test 1 : %s : %s", ex2, ft_strlowcase(ex2));
	printf("\n test 2 : %s : %s", exMAJ, ft_strlowcase(exMAJ));

	new_ex(&ex);
	printf("\n test 1 : %s : %s", ex2, ft_strcapitalize(ex2));
	printf("\n test 2 : %s : %s", exMAJ, ft_strcapitalize(exMAJ));

}


