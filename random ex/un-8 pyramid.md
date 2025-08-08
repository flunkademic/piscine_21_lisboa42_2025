

**9. `ft_print_pyramid(char c, int height)`**
Print a centered pyramid using `c`. This one is tricky — try only if you feel ready.

```c
ft_print_pyramid('^', 3);
Output:
  ^  
 ^^^ 
^^^^^
```

---

#include <unistd.h>

void ft_print_pyramid(char c, int height)
{
    int i;
    int j;

    i = 0;
    while (i < height)
    {
        // Print spaces first
        j = 0;
        while (j < height - i - 1)
        {
            write(1, " ", 1);
            j++;
        }
        // Print characters
        j = 0;
        while (j < 2 * i + 1)
        {
            write(1, &c, 1);
            j++;
        }
        // Newline
        write(1, "\n", 1);
        i++;
    }
}

int main(void)
{
    ft_print_pyramid('^', 3);
    return (0);
}




What’s happening here?
The pyramid has height rows.
Each row has some spaces first, then some characters (c), then maybe spaces (but for console, just spaces before and then the characters are enough).
The number of characters increases by 2 each row:
Row 1 (i=0): 1 character
Row 2 (i=1): 3 characters
Row 3 (i=2): 5 characters
The number of spaces decreases by 1 each row:
Row 1: 2 spaces
Row 2: 1 space
Row 3: 0 spaces
Variables:
i = current row (0 to height-1)
Spaces = height - i - 1
Characters = 2 * i + 1
Plain English steps:
For each row i in [0 .. height-1]:
a. Print height - i - 1 spaces.
b. Print 2 * i + 1 characters c.
c. Print a newline.