/*
• Create a function that displays ’N’ or ’P’ depending on the sign of the integer passed
as a parameter.
◦ If n is negative, display ’N’.
◦ If n is positive or zero, display ’P’.
• The function should be prototyped as follows:
void ft_is_negative(int n);
*/

#include <unistd.h>

void    ft_is_negative(int n)
{
    if (n >= 0)
    {
        write(1, "P", 1);
    }
    else
    {
        write(1, "N", 1);
    }
}

int main(void)
{
    ft_is_negative(42);
    ft_is_negative(0);
    ft_is_negative(-42);
}