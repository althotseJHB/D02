#include <stdio.h>
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
    // write(1,&alpha,1); "could also be written here and neglect ft_putchar"
    ft_putchar(alpha);
    alpha++;
  }
}


int main() {
  ft_print_alphabet();
  return 0;
}
