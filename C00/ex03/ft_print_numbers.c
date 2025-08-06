/*
• Create a function that displays all digits on a single line, in ascending order.
• The function should be prototyped as follows:
void ft_print_numbers(void);
*/

#include <unistd.h>

void    ft_print_numbers(void)
{
    char    n;
    n = '0';

    while (n <= '9')
    {
        write(1, &n, 1);
        n++;
    }
}

int main(void)
{
    ft_print_numbers();
}