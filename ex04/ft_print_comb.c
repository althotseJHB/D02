/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: althotse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:04:11 by althotse          #+#    #+#             */
/*   Updated: 2020/07/15 14:06:45 by althotse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c)
{

}
void ft_print_numb(char a, char b, char c)
{
      ft_putchar(a);
      ft_putchar(b);
      ft_putchar(c);
      ft_putchar(',');
      ft_putchar(' ');
}

}
void ft_print_comb(void)
{
  char a = '0';
  char b = '0';
  char c = '0';

  while (a < '9')
    {
      while (b < '9')
      {
        while (c < '9')
		{
          ft_print_numb(a,b,c);
   		  c++;
        }
   		c = 0;
		    b++;
      }
		b=0;
   		 while (a <= '9')
   		 {
     	 while (b <= '9')
      		{
       		 while (c <= '9')
				{
       			   ft_putchar(c);
         			c++;
       			 }
       		 ft_putchar(b);
      		 b++;
     		 }
   		 ft_putchar(a);
   		 a++;
   		 }
}
