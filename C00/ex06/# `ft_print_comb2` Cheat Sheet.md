# `ft_print_comb2` Cheat Sheet

## ✨ Goal

Print all 2-digit combinations where the **first number is less than the second** (e.g., `00 01`, `00 02`, ..., `98 99`).

---

## 🎮 Your Approach: Character-by-Character

| Feature            | What You Did                | Issue / Limitation                           | Fix / Tip                                           |   |                      |
| ------------------ | --------------------------- | -------------------------------------------- | --------------------------------------------------- | - | -------------------- |
| **Variables**      | `char a, b, c, d;`          | Only `a` is initialized                      | Initialize **all** chars before using them          |   |                      |
| **Loop Structure** | 4 nested loops (`a` to `d`) | No logic to ensure `ab < cd`                 | Add: \`if (a < c                                    |   | (a == c && b < d))\` |
| **Comparison**     | None                        | All 4-digit pairs printed, even invalid ones | Add the above condition                             |   |                      |
| **Printing**       | Using `write()`             | Correct format                               | ✅                                                   |   |                      |
| **Comma Handling** | Always prints comma         | Comma appears after the last combo           | Add: `if (!(a=='9' && b=='8' && c=='9' && d=='9'))` |   |                      |

> ✅ Best if you're learning how digits work individually and want deeper control.

---

## 🔢 Integer Approach (Recommended for Clarity)

| Feature            | What It Does                           | Benefit                              |
| ------------------ | -------------------------------------- | ------------------------------------ |
| **Variables**      | `int a = 0; int b;`                    | Easier to compare and do math        |
| **Loop Structure** | `a` from `0 to 98`, `b = a+1 to 99`    | Automatically ensures `a < b`        |
| **Comparison**     | Not needed (built into loop structure) | Clean logic                          |
| **Printing**       | Use division/modulo + `'0'` to print   | Easier and clearer output formatting |
| **Comma Handling** | Skip comma on last combo               | Avoids trailing comma                |

> ✅ Great for writing clean code and understanding number manipulation.

---

## 📃 Sample Output (Both Versions)

```text
00 01, 00 02, 00 03, ..., 98 99
```

Total combinations: **4,950**

---

## 🔧 How to Convert Integers to Characters

To print `42`:

* Tens digit: `42 / 10 = 4`, so `4 + '0' = '4'`
* Units digit: `42 % 10 = 2`, so `2 + '0' = '2'`

```c
ft_putchar((a / 10) + '0');
ft_putchar((a % 10) + '0');
```

---

## 💡 Use Case Guide

| Goal                                       | Use This Approach    |
| ------------------------------------------ | -------------------- |
| Learn ASCII, digit manipulation            | Char-by-char version |
| Write clean, readable code fast            | Integer version      |
| Practice nested loops and logic conditions | Either version       |
| Avoid invalid combos and keep logic simple | Integer version      |

---

Feel free to use either approach as a learning tool. Both are valid — you're just trading **manual control** (char-by-char) for **simpler structure** (integer-based).

Keep practicing, Pisciner! ✨
