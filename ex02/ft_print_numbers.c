#include <stdio.h>
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
    // write(1,&number,1); "could also be written here and neglect ft_putchar"
    ft_putchar(number);
    number++;
  }
}


int main() {
  ft_print_number();
  return 0;
}
