/*
• Create a function that displays all different combinations of two distinct two-digits
numbers (XX XX) between 00 and 99, listed in ascending order.
• Expected output:
$>./a.out | cat -e
00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>
• The function should be prototyped as follows:
void ft_print_comb2(void);
*/

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
    int a = 0;
    int b;

    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            ft_putchar((a / 10) + '0'); // first digit of a
            ft_putchar((a % 10) + '0'); // second digit of a
            ft_putchar(' ');
            ft_putchar((b / 10) + '0'); // first digit of b
            ft_putchar((b % 10) + '0'); // second digit of b

            if (a != 98 || b != 99)
                write(1, ", ", 2);

            b++;
        }
        a++;
    }
}

int main(void)
{
    ft_print_comb2();
    return 0;
}
