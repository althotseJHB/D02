#include <stdio.h>
#include <unistd.h>


void ft_putchar(char alpha){
  write(1,&alpha,1);
}

void ft_print_alphabet(void)
{
  char alpha;
  alpha = 'z';
  while (alpha >= 'a')
  {
    // write(1,&alpha,1);
    ft_putchar(alpha);
    alpha--;
  }
}


int main() {
  ft_print_alphabet();
  return 0;
}
