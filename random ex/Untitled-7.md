So, if I summarize it as a checklist:
Set i = 0 (start at step 1).

While i < height:
a. Set j = 0 (start counting blocks on this step).
b. While j <= i (print blocks):
- print block
- increase j
c. print newline (go to next step)
d. increase i (go to next step)


#include <unistd.h>

void    ft_print_staircase(char c, int height)
{
    int i;
    int j;

    i = 0;
    while (i < height)
    {
        j = 0;
        while (j <= i)
        {
            write (1, &c, 1);
            j++;
        }
        write (1, "\n", 1);
        i++;
    }
}
int main(void)
{
    ft_print_staircase('S', 4);
    return (0);
}

