### 1. 🔢 What is the value of `'3' - '0'`?

**A)** `'3'`

---

### 2. ✍️ Write a loop that prints the digits 0 to 9 using `write()`. Use only `char` variables.

```c
// Your code here:
#include <unistd.h>
void    ft_putchar(void)
{
    char    n;

    n = '0';
    while (n <= '9')
    {
        write(1, &n, 1);
        n++;
    }
}
```

---

### 3. 🧠 What’s the difference between `char x = '5';` and `int x = 5;`?

Explain in **1-2 sentences**.
char means the character 5, not the actual number. In ASCII code, it's like 5 but not a number.

int is the integer number 5, it doesn't need quotes, cause it is not a string, like char literal character.

so you can't compare char x to int x cause they are different data types. We would need to convert them in order to do anything with them together. 
---

### 4. ✅ Which of the following **prints `01`** to the screen?

**A)** `write(1, "01", 2);`
**B)** `write(1, &(char){(1 / 10) + '0'}, 1); write(1, &(char){(1 % 10) + '0'}, 1);`
**C)** `printf("%02d", 1);` *(Assuming you can use it)*
**D)** All of the above

Besides A) nothing else makes sense. 
I mean B just writes 1 byte of info, but we have 2 declarations of char and writing of 2 characters? So it's wrong? I mean, if it would have been , 2bytes, then it would have been fine? But it seems weird to me, cause ; means sorta like this statement, function or whatever ends... 
C) is just 1.0 right?
D - no?

---

### 5. ✍️ Using `int x`, write a function that prints any number from `0` to `99` as two digits (e.g., `01`, `42`, `99`), using only `write()`.

```c
// Your function here:
#include <unistd.h>
void print_two_digits(int x)
{
    while (x <= 99)
    {
        write(1, &(char){(x / 10 + '0')}, 1);
        write(1, &(char){(x % 10 + '0')}, 1);
    }
}

int main(void)
{
    print_two_digits(57);
}

but online C compiler shows me a neverending stream of 57 --- why?
```

---

### 6. 🔄 What will this code output?

```c
int a = 0;
int b = 1;
write(1, &(char){(a / 10) + '0'}, 1);
write(1, &(char){(a % 10) + '0'}, 1);
write(1, " ", 1);
write(1, &(char){(b / 10) + '0'}, 1);
write(1, &(char){(b % 10) + '0'}, 1);
```
00 01
---

### 7. ❌ What’s wrong with this code?

```c
char a = '0';
while (a <= '9')
{
    char b;
    while (b <= '9')
    {
        write(1, &a, 1);
        write(1, &b, 1);
        b++;
    }
    a++;
}
```

Explain the **bug** and how to fix it.

--- ERROR!
/tmp/GkObjuQr2m/main.c:3:1: error: expected identifier or '(' before 'while'
    3 | while (a <= '9')
      | ^~~~~
 0 it showed me this, but I have no idea what it means, there is literally no ( before while... And expected identifier is what?

---

### 8. ✍️ Write a `ft_print_comb2()` style loop using `int` that prints **just one line**: `00 01`.

```c
// Your code here:
#include <unistd.h>
void ft_print_comb2(void)
{
    int     x;
    x = 0;
    write (1, &(char){(x / 10 + '0')}, 1);
    write (1, &x, 4);
    write (1, " ", 1);
    write (1, &x, 4);
    write (1, &(char){(x / 10 + '1')}, 1);
}
int main(void)
{
    ft_print_comb2();
}
```

I tried to write just x, as x was 0, but I think this may be wrong?

---

### 9. 🧠 True or False:

If I write `int x = 01;` the value stored is **1**, but some C compilers might treat it as **octal** (base 8).

True if the compilers are older?

---

### 10. ✍️ Fill in the blanks:

To print the tens and units digit of `x` using only `write()`:

```c
write(1, &(char){(x / 10) + '0'}, 1);  // tens digit
write(1, &(char){(x % 10) + '0'}, 1);  // units digit
```

---

Would you like:

* Me to **check your answers one by one**, or
* Me to give you a **blank version** you can try on your own?

Also, do you want me to add bonus “Piscine-level” follow-ups (e.g., remove the comma after the last pair, or compare `ab < cd`) once you nail these?
