Absolutely — you’re building **foundations** right now, and mastering these basics will make the rest of the Piscine *much* easier. Here's a new batch of beginner-level exercises — all within the scope of what you've already learned, but with small twists to push your understanding a bit further.

---

## 🧪 **Practice Pack 2: Basic C + `write()` + Loops**

### 🟦 Level 1: Straightforward Logic

---

**1. `ft_print_uppercase_alphabet`**
Print uppercase letters A to Z.

#include <unistd.h>
void  ft_print_uppercase_alphabet(void)
{
  char letter;
  letter = 'A';
  while (letter <= 'Z')
  {
    write(1, &letter, 1);
    letter++;
  }
}

int main(void)
{
  ft_print_uppercase_alphabet();
  return (0);
}

```c
void ft_print_uppercase_alphabet(void);
// Output: ABCDEFGHIJKLMNOPQRSTUVWXYZ
```

---

**2. `ft_print_digits_reverse`**
Print digits in reverse: 9 to 0.

#include <unistd.h>
void  ft_print_digits_reverse(void)
{
  char n;
  n = '9';
  while (n >= '0')
  {
    write(1, &n, 1);
    n--;
  }
}
int main(void)
{
  ft_print_digits_reverse();
}

```c
void ft_print_digits_reverse(void);
// Output: 9876543210
```

---

**3. `ft_putchar_multiple_lines`**
Print character `c` on **`n` lines**. One char per line.

```c
void ft_putchar_multiple_lines(char c, int n);
/*
ft_putchar_multiple_lines('#', 3);
Output:
#
#
#
*/
```

#include <unistd.h>
void ft_putchar_multiple_lines(char c, int n)
{
  int i;
  i = 0;
  while (i < n)
  {
    write(1, &c, 1);
    write(1, "\n", 1);
    i++;
  }
}

int main(void)
{
  ft_putchar_multiple_lines('Z', 8);
  return (0);
}

---

### 🟨 Level 2: Conditionals + Loop Logic

---

**4. `ft_print_odd_digits`**
Print only odd digits (`1 3 5 7 9`) using a loop.

```c
void ft_print_odd_digits(void);
// Output: 13579

#include <unistd.h>
void  ft_print_odd_digits(void)
{
  char n;
  n = '0';
  if ((n - '0') % 2 == 1)
  {
    write(1, &n, 1);
    n++;
  }
}
int main(void)
{
  ft_print_odd_digits();
}

IS there a reason I am not seeing the 13579 in the output? I am using c compiler online.
```

---

**5. `ft_repeat_char_line(char c, int n)`**
Print the same character `n` times, but with **newline after each**.

```c
void ft_repeat_char_line(char c, int n);
/*
Example:
ft_repeat_char_line('>', 3);
Output:
>
>
>
*/

```
#include <unistd.h>
void  ft_repeat_char_line(char c, int n)
{
  int i;
  i = 0;
  while (i < n)
  {
    write(1, &c, 1);
    write(1, "\n", 1);
  }
}

int main(void)
{
  ft_repeat_char_line('A', 6);
  return (0);
}

---- this print infinite As


---

**6. `ft_print_custom_range(char start, char end)`**
Like `ft_print_range`, but also works **backwards** if start > end.

```c
ft_print_custom_range('d', 'h'); // defgh
ft_print_custom_range('z', 'u'); // zyxwvu
```

#include <unistd.h>
void  ft_print_custom_range(char start, char end)
{
  if (start <= end) {
      while (start < end)
    {
      write(1, &start, 1);
      start++;
    }
  }
  else {
    while (start >= end)
    {
      write(1, &start, 1);
      start--;
    }
  }
}

int main(void)
{
  ft_print_custom_range('e', 'z');
  write(1, "\n", 1);
  ft_print_custom_range('z', 'A');
}

-=----THis whole else if and while is crazy... isn't there a better way to write this?'

---

### 🟥 Level 3: Combined Concepts

---

**7. `ft_print_square(char c, int size)`**
Print a square of size `n x n` made of character `c`.

```c
void ft_print_square(char c, int size);
/*
ft_print_square('#', 3);
Output:
###
###
###
*/
```

#include <unistd.h>
void  ft_print_square(char c, int size)
{ 
  int i;
  int j;

  i = 0;
  while (i < size)
  {
    j = 0;
    while (j < size) 
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
  ft_print_square('#', 5);
  return (0);
}


---

**8. `ft_print_staircase(char c, int height)`**
Print a left-aligned staircase like this:

```c
ft_print_staircase('*', 4);
Output:
*
**
***
****
```

#include <unistd.h>
void  ft_print_staircase(char c, int height)
{
  int i;
  int j;

  i = 0;
  while (i < height)
  {
    write(1, &c, 1);
    write(1, "\n", 1); 
    i++;
  }
}

int main(void)
{
  ft_print_staircase('*', 4);
  return (0);
}

---

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
