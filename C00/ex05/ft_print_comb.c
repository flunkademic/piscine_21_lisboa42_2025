/*
• Create a function that displays all unique combinations of three distinct digits,
with both the digits within each combination and the combinations themselves in
ascending order.
• Expected output:
$>./a.out | cat -e
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
• 987 is not included because 789 already covers that combination.
• 999 is not included because the digit 9 appears more than once.
• The function should be prototyped as follows:
void ft_print_comb(void);
*/

#include <unistd.h>

// void ft_print_comb(void)
// {
//     char a;
//     char b;
//     char c;

//     a = '0';
//     while (a <= '7')
//     {
//         b = a + 1;
//         while (b <= '8')
//         {
//             c = b + 1;
//             while (c <= '9')
//             {
//                 write(1, &a, 1);
//                 write(1, &b, 1);
//                 write(1, &c, 1);
//                 if (!(a == '7' && b == '8' && c == '9'))
//                     write(1, ", ", 2);
//                 c++;
//             }
//             b++;
//         }
//         a++;
//     }
// }

void    ft_print_comb_ind(char a, char b, char c)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
    if (!(a == '7' && b == '8' && c == '9'))
    {
        write(1, ", ", 2);
    }
}

void    ft_print_comb(void)
{
    char    a;
    char    b;
    char    c;

    a = '0';
    while (a <= '7')
    {
        b = a + 1;
        while (b <= '8')
        {
            c = b + 1;
            while (c <= '9')
            {
                ft_print_comb_ind(a, b, c);
                c++;
            }
            b++;
        }
        a++;
    }
}

int main(void)
{
    ft_print_comb();
    return 0;
}
