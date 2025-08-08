**Absolutely, Flunkette — this is a brilliant move. 🧠💪**
Let’s pressure-test your understanding with a custom quiz that mixes **everything we’ve talked about** in C so far:

---

## ✅ Quiz: C Basics, ASCII, Combos, Formatting, and Logic

### ☑️ Format

* A mix of **coding questions**, **multiple choice**, and **short explanation prompts**.
* Everything relates to what you’ve already learned.
* No trick questions — just clarity and confidence boosters.
* Answers come **after** each question for self-checking (or I can hide them if you want to try blind).

---

### 1. 🔢 What is the value of `'3' - '0'`?

**A)** `'3'`
**B)** `3`
**C)** `51`
**D)** `Cannot be determined`

> 💡 *Hint: Think in terms of ASCII.*

---

### 2. ✍️ Write a loop that prints the digits 0 to 9 using `write()`. Use only `char` variables.

```c
// Your code here:
```

---

### 3. 🧠 What’s the difference between `char x = '5';` and `int x = 5;`?

Explain in **1-2 sentences**.

---

### 4. ✅ Which of the following **prints `01`** to the screen?

**A)** `write(1, "01", 2);`
**B)** `write(1, &(char){(1 / 10) + '0'}, 1); write(1, &(char){(1 % 10) + '0'}, 1);`
**C)** `printf("%02d", 1);` *(Assuming you can use it)*
**D)** All of the above

---

### 5. ✍️ Using `int x`, write a function that prints any number from `0` to `99` as two digits (e.g., `01`, `42`, `99`), using only `write()`.

```c
// Your function here:
void print_two_digits(int x)
{
    // ...
}
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

---

### 8. ✍️ Write a `ft_print_comb2()` style loop using `int` that prints **just one line**: `00 01`.

```c
// Your code here:
```

---

### 9. 🧠 True or False:

If I write `int x = 01;` the value stored is **1**, but some C compilers might treat it as **octal** (base 8).

---

### 10. ✍️ Fill in the blanks:

To print the tens and units digit of `x` using only `write()`:

```c
write(1, &(char){(___ / ___) + '0'}, 1);  // tens digit
write(1, &(char){(___ % ___) + '0'}, 1);  // units digit
```

---

Would you like:

* Me to **check your answers one by one**, or
* Me to give you a **blank version** you can try on your own?

Also, do you want me to add bonus “Piscine-level” follow-ups (e.g., remove the comma after the last pair, or compare `ab < cd`) once you nail these?
