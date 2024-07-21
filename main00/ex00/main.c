void ft_putchar(char c);

int main() {
    int i;
    i = 32;

    while (i <= 126)
    {
      ft_putchar(i);
      i++;
    }

    ft_putchar(10);

    return 0;
}
