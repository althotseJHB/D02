#include <stdio.h>
#include <unistd.h>

void ft_putchar(int c){
  write(1,&c,1);
}

int n = '-15';

void ft_is_negative(int n)
{
  int c;
  c = '0';
  if (c < 0) {
    ft_putchar('N');
  }
  if (c >= 0) {
    ft_putchar('P');
  }
}


int main() {
  ft_is_negative(n);
  return 0;
}
