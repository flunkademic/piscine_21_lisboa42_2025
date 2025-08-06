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

void ft_print_comb_ind(char a, char b, char c, char d)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, " ", 1);
    write(1, &c, 1);
    write(1, &d, 1);
    if (!(a == '9' && b == '8' && c == '9' && d == '9'))
        write(1, ", ", 2);
}

void ft_print_comb(void)
{
    char a = '0';
    char b, c, d;

    while (a <= '9')
    {
        b = '0';
        while (b <= '9')
        {
            c = '0';
            while (c <= '9')
            {
                d = '0';
                while (d <= '9')
                {
                    if ((a < c) || (a == c && b < d)) // compare "ab" < "cd"
                        ft_print_comb_ind(a, b, c, d);
                    d++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

int main(void)
{
    ft_print_comb2();
    return (0);
}
