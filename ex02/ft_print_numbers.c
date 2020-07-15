/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: althotse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:01:06 by althotse          #+#    #+#             */
/*   Updated: 2020/07/15 14:01:13 by althotse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char number){
  write(1,&number,1);
}

void ft_print_number(void)
{
  char number;
  number = '0';
  while (number <= '9')
  {
    ft_putchar(number);
    number++;
  }
}
