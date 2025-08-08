Absolutely — here’s a quick **quiz + coding challenge pack** to test your understanding of **Lesson 1 (C00 ex00–ex04)**.

---

## 🧠 Quick Quiz (5 Questions)

### 1. **True or False**

You can use `printf()` in `ft_putchar.c` if it helps with debugging.

<details><summary>✅ Reveal Answer</summary>
❌ **False** — Only `write()` is allowed. Using forbidden functions = grade -42.
</details>

---

### 2. **Multiple Choice**

What does `write(1, &c, 1);` do?

A. Writes 1 byte from `c` to the screen
B. Writes the address of `c` to the screen
C. Writes 1 byte from `stdin` to `c`
D. Compiles but does nothing

<details><summary>✅ Reveal Answer</summary>
**A.** It writes 1 byte (character) from `c` to standard output (file descriptor 1).
</details>

---

### 3. **Fill in the blank**

This function prints all lowercase letters from `a` to `z`:

```c
void ft_print_alphabet(void) {
    char c = 'a';
    while (________) {
        write(1, &c, 1);
        c++;
    }
}
```

<details><summary>✅ Reveal Answer</summary>
`c <= 'z'`
</details>

---

### 4. **Debug This!**

What’s wrong with this function?

```c
void ft_is_negative(int n) {
    if n < 0
        write(1, "N", 1);
    else
        write(1, "P", 1);
}
```

<details><summary>✅ Reveal Answer</summary>
Missing parentheses in `if`: should be `if (n < 0)`
</details>

---

### 5. **Short Answer**

What value does this loop start with, and what does it print?

```c
char i = '0';
while (i <= '9') {
    write(1, &i, 1);
    i++;
}
```

<details><summary>✅ Reveal Answer</summary>
Starts at `'0'` (ASCII 48), prints: `0123456789`
</details>

---

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

---

**2. `ft_print_ascii_range`**
Write a function that prints characters from `'a'` to `'f'`.

```c
void ft_print_ascii_range(void);
// Output: abcdef
```

---

### 🟨 Medium

**3. `ft_print_even_digits`**
Print only even digits (`0 2 4 6 8`) using a loop.

```c
void ft_print_even_digits(void);
// Output: 02468
```

---

**4. `ft_print_range(char start, char end)`**
General function to print any ASCII character range.

```c
ft_print_range('d', 'h'); // Output: defgh
ft_print_range('5', '9'); // Output: 56789
```

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

---

Would you like me to generate solution templates or check your answers if you code them? Or do you want another quiz on `ft_print_comb`, `ft_putnbr`, etc. next?
