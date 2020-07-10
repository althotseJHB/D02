<<<<<<< HEAD
/*#include <unistd.h>
=======
#include <unistd.h>
>>>>>>> 0a209d48e47b1848d32f921a89f10a67e0c37678

void ft_putchar(char c)
{
  write(1,&c,1);
<<<<<<< HEAD




}
void ft_print_numb(char a, char b, char c)
{
      ft_putchar(a);
      ft_putchar(b);
      ft_putchar(c);
      ft_putchar(',');
      ft_putchar(' ');
}




=======
}
>>>>>>> 0a209d48e47b1848d32f921a89f10a67e0c37678
void ft_print_comb(void)
{
  char a = '0';
  char b = '0';
  char c = '0';

<<<<<<< HEAD
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
=======
    while (a <= '9')
    {
      while (b <= '9')
      {
        while (c <= '9') {
          ft_putchar(c);
          c++;
        }
        ft_putchar(b);
        b++;
      }
    ft_putchar(a);
>>>>>>> 0a209d48e47b1848d32f921a89f10a67e0c37678
    a++;
    }
}

int main() {
  ft_print_comb();
  return 0;
}
<<<<<<< HEAD
*/

#include <unistd.h>

void ft_putchar(char c)
{
	  write(1,&c,1);
}

void ft_print_numb(char a, char b, char c)
{
	  
	  ft_putchar(a);
	  ft_putchar(b);
	  ft_putchar(c);
	  ft_putchar(',');
	  ft_putchar(' ');
}

void ft_print_comb(void) 
{
	  char a = '0';
	    char b = '0';
		  char c = '0';

		    while (a <=  '9')
				  {
				    while(b <=  '9')
				    {
					  while(c <= '9')
					  {
					  //  if(a < b && b<c)
					//	{
						 	 ft_print_numb(a,b,c);
					//	}
						c++;
													        
					 }
					 c = '0';
					 b++;
				    }
					b = '0';
					a++;
				  }

}

int main()
{
	  ft_print_comb();
	    return 0;
}

=======
>>>>>>> 0a209d48e47b1848d32f921a89f10a67e0c37678
