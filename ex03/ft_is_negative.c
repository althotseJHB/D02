/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: althotse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:03:13 by althotse          #+#    #+#             */
/*   Updated: 2020/07/15 14:03:25 by althotse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(int i)
{
  write(1,&c,1);
}

void ft_is_negative(int i) {
  char a = 'P';
  char b = 'N';

  if (i>0) {
    ft_putchar(a);
  } else {
    ft_putchar(b);
  }
}
