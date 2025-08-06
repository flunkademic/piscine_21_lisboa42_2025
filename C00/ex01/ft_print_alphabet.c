/*
• Create a function that displays the alphabet in lowercase, on a single line, in ascending order, starting from the letter ’a’.
• The function should be prototyped as follows:
void ft_print_alphabet(void);
*/

#include <unistd.h>

void    ft_print_alphabet(void)
{
    char    letter;
    letter = 'a';

    while (letter <= 'z')
    {
        write(1, &letter, 1);
        letter++;
    }
}

int main(void)
{
    ft_print_alphabet();
    return (0);
}