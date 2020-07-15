/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: althotse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:48:52 by althotse          #+#    #+#             */
/*   Updated: 2020/07/15 13:58:53 by althotse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char alpha){
  write(1,&alpha,1);
}

void ft_print_alphabet(void)
{
  char alpha;
  alpha = 'a';
  while (alpha <= 'z')
  {
    ft_putchar(alpha);
    alpha++;
  }
}
