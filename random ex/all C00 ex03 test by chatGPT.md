Perfect! Next up is **ex03: ft\_print\_numbers**.

### Goal:

Print all digits from 0 to 9 on a single line (i.e., `0123456789`).

---

Quick quiz:

1. How do you represent digits `'0'` to `'9'` in ASCII?
- not sure what you mean? Do you mean like 48 and 57? Like the number ascii or whatever it is called?
2. How would you write a loop to print all digits?
#include <unistd.h>
void    ft_print_all_digits(void)
{
    char    n;
    n = '0';
    while (n <= '9')
    {
        write(1, &n, 1);
        n++;
    }
}
int     main(void)
{
    ft_print_all_digits();
}

3. What do you need to do to convert an integer digit (0–9) to its ASCII character?

I guess we just + '0'?

like int i = 9;
    char i = 9 + '0';

    Is this it?