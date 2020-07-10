##include <unistd.h>

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

int int main() {
  ft_is_negative(4);
  // test other numbers to see if the code works
  return 0;
}
