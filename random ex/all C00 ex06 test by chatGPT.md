Great! Here’s the next exercise breakdown and quiz to prep your brain:

---

### Exercise: ft\_print\_comb2

**Goal:**

Print all different combinations of two distinct two-digit numbers (from 00 to 99), listed in ascending order.

* Format: `00 01, 00 02, ..., 98 99`
* No duplicates or reversed combos (e.g., `01 00` not allowed)
* Numbers must be two digits (so print leading zeroes if needed)

**Prototype:**

```c
void ft_print_comb2(void);
```

---

### Mini quiz:

1. How do you represent a two-digit number as two separate characters for printing?
well, 
if (n >= 10)
{
    int n1, n2;
    n1 = n / 10 + '0';
    n2 = n % 10 + '0';
    write(1, &n1&n2, 2);
}
2. How would you handle leading zeroes for numbers less than 10?
if (n < 10)
{
    int n1, n2;
    n1 = n / 10 + '0';
    n2 = n % 10 + '0';
    write(1, &n1&n2, 2);
}???

3. How do you avoid printing combinations like `01 00` after `00 01`?
Incrementing in the right place, and now, we just increment b2, the last unit digit char.
4. How do you decide when to print the comma and space?
by the will of god.
5. How many nested loops will you likely need? Why?
I think 4? But I am not sure... 
Take a shot at these, and then we can brainstorm the approach together before you start coding!


#include <unistd.h>
void    ft_putchar(void)
{
    write(1, &c, 1);
}

void    ft_print_comb2(int a, int b)
{
    a = 0;
    if (a >= 10)
    {
        int a1;
        int a2;
        a1 = a / 10 + '0';
        a2 = a % 10 + '0';

        int b1;
        int b2;
        b1 = b / 10 + '0';
        b2 = b % 10 + '0';

        write(1, &a1, 1);
        write(1, &a2, 1);
        write(1, ", ", 2);
        write(1, &b1, 1);
        write(1, &b2, 1);
    }
}


Nice try — you’re thinking in the right direction! Let’s clarify and build on your answers a bit.

---

### Your quiz answers & feedback:

**1. Representing two-digit numbers as chars for printing:**
Correct concept — you split the number into tens and ones by dividing and modulo by 10, then add `'0'` to convert each digit to its ASCII character.

**But:**
In your example, `write(1, &a1&b2, 2);` won’t work because `&a1&b2` is invalid. You need a buffer (e.g., `char digits[2] = {a1, a2};`) and then `write(1, digits, 2);`.

---

**2. Handling leading zeroes:**
Your code does the same for numbers less than 10, which is great! Just be sure to always do that regardless of number size — if `n = 7`, tens digit is `0`, ones digit is `7`.

---

**3. Avoiding duplicates (like `01 00` after `00 01`):**
You’re right that controlling your loop variables is key. Usually, you have two numbers `a` and `b`:

* Outer loop: `a` from 0 to 98
* Inner loop: `b` from `a + 1` to 99

This guarantees `b` is always greater than `a` and prevents reversed or duplicate combos.

---

**4. Printing comma and space:**
You print `", "` after every pair except the very last one: when `a == 98` and `b == 99`, no comma.

---

**5. Number of nested loops:**
You only need **2 nested loops**: one for `a` (first number), one for `b` (second number). No need for four.

---

### Suggested approach before coding:

* Loop `a` from 0 to 98
* Loop `b` from `a + 1` to 99
* Convert `a` and `b` into two ASCII digits each
* Print `a` digits, then space, then `b` digits
* If not last combo, print `, `

---

If you want, try writing a minimal sketch of the two nested loops and digit conversion, and I’ll help you refine it! How’s that sound?
