Quiz time!
How would you generate all combinations of three distinct digits in ascending order?
#include <unistd.h>
void    ft_putchar(char a, char b, char c)
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
                ft_putchar(a, b, c);
                c++;
            }
            b++;
        }
        a++;
    }
}

int     main(void)
{
    ft_print_comb();
    return (0);
}

How do you make sure digits are distinct and ordered (e.g., 0 < 1 < 2)?

increment after the last unit in the number reached maximum. So first we increase c, then when c reaches 9 through the loop, we increment b, and since c = b + 1, it will always be in ascending order. Same for a and b. It's just loop from the smaller unit in our printed "number" which is just a printing of 3 characters... 

How will you print the combinations separated by , except the last one?
(!()) - a condition to check if the maximum biggest number is not reached via the combo of our characters, like a = 7 and b = 8 and c = 9; then it doesn't print. 

What ASCII values correspond to '0' to '9'?
48 and 57;

How can you use nested loops to generate every combination of three digits?

What conditions inside the loops will ensure digits are strictly increasing (no repeats, no unordered combos)?

How can you handle printing the separator ", " only between combinations, but not after the last one?

I really think I answered all your questions in the function I built. I honestly think its pretty aamzing... 