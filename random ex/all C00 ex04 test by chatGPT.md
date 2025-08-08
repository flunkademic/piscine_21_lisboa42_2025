
## ex04: **ft\_is\_negative**

### Goal:

Write a function that takes an integer `n` and:

* Prints `'N'` if `n` is negative
* Prints `'P'` if `n` is zero or positive

### Prototype:

```c
void ft_is_negative(int n);
```

---

### Quick quiz to check your understanding:

1. How do you check if a number `n` is negative in C?
Answer: uhm if n < 0? I mean, c or the terminal does that for us? Or idnk what exactly do you mean?
2. Which character do you print if `n < 0`?
"N"
3. Which character do you print if `n >= 0`?
"P"
4. What function and parameters do you use to print a single character?
write function, system call, low basic function, parameters are: fd - 1, standard output to terminal; &n or whatever name and the adress-of operator, the BUFFER; and number of bytes, usually 1 for characters, 4 for integers etc..
5. What header do you need for using `write`?
#include <unistd.h>

Answer these and I’ll guide you to a clean implementation!
