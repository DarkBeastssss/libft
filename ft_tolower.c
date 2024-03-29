/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amecani <amecani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:52:34 by amecani           #+#    #+#             */
/*   Updated: 2023/10/15 14:42:04 by amecani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		c = c + 32;
	return (c);
}

// #include <stdio.h>
// int main()
// {
//     char owo = 'W';
//     printf("%c",ft_tolower(owo));
//     return 0;
// }