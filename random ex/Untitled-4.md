
## 🔧 Mini Coding Exercises

### 🟦 Easy (Warm-Up)

**1. `ft_putchar_repeated`**
Write a function that prints the same character `c` **n times**.

```c
void ft_putchar_repeated(char c, int n);
```

Example:

```c
ft_putchar_repeated('A', 5); // Output: AAAAA
```

#include <unistd.h>

void    ft_putchar_repeated(char c, int n)
{
    n = 0;
    while (n <= n)
    {
        write(1, &c, 1);
        n++;
    }
}

int main(void)
{

    ft_putchar_repeated('A', 19);
    return (0);
}

==================================================================================

---

**2. `ft_print_ascii_range`**
Write a function that prints characters from `'a'` to `'f'`.

```c
void ft_print_ascii_range(void);
// Output: abcdef
```
#include <unistd.h>

void    ft_print_ascii_range(void)
{
    char n;
    n = 'a';
    while (n <= 'f')
    {
        write(1, &c, 1);
        n++;
    }
}

int main(void)
{
    ft_print_ascii_range();
    return (0);
}


---

### 🟨 Medium

**3. `ft_print_even_digits`**
Print only even digits (`0 2 4 6 8`) using a loop.

```c
void ft_print_even_digits(void);
// Output: 02468
{
    int c;
    char n;
    c = 0;
    n = c % 10 + '0';
    while (c <= 9)
    {
        if ((n % 2) == 0) {
            write(1, &c, 4);
        }
    }
}
```

---

**4. `ft_print_range(char start, char end)`**
General function to print any ASCII character range.

```c
ft_print_range('d', 'h'); // Output: defgh
ft_print_range('5', '9'); // Output: 56789
```

void    ft_print_range(char start, char end)
{
    while (start <= end)
    {
        write(1, &start, 1);
        start++;
    }
}

---

### 🟥 Challenge

**5. `ft_print_alphabet_x_times`**
Print the alphabet **x times**, one line per repetition.

```c
void ft_print_alphabet_x_times(int x);
/*
Example:
ft_print_alphabet_x_times(3);

Output:
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
*/
```
void ft_print_alphabet_x_times(int x)
{
    while (x >= 0)
}
I am not sure on how to do these honestly... I kinda think I learned, but wehn put face to face with these exercises, I am stuck. So i need your help