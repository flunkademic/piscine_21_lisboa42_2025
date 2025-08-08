Your quiz — answer without looking at notes
In write(1, &c, 1), what does the 1 in the first position mean?
Answer: it stands for file descriptor, and basically, it can have 3 values, and value 1 means print the output to standard output - in our case, the terminal.
0 stands for read input from standard input - usually done with read (0, &c, 1) - for example, it will wait for my input from the keyboard. 
And 2 stands for standard error - basically we can send the messages to a specific text. Like 2> filename - although I do not remember everything for this particular rule. Like how to run it or whatever.

Why do we pass &c and not just c?
Because we need to POINT towards the address where c's value is located - Address of C is where the value is stored. Right?

If I want to print the letter A, what would a call to ft_putchar look like in main?
ft_putchar('A'); - literal character we want to pass.

int main(void)
{
    ft_putchar('A');
    return (0); // best practice to end the program correctly.
}

What header must be included to use write?
#include <unistd.h>

If you forget to include that header, will it still compile with Moulinette’s flags? Why or why not?
No, it will not, but I have no idea what those flags stand for. I only know it checks wit hextra attention... but not much else.
The reason it will not it will be cause the write function won't be able to run without the library that defines it. Not sure what type of error it will show, unless I test it now live... 

Want me to ask you these five now so we check if you actually have the concepts in your head?

===============================================================================
Nice — you clearly understand the **core logic** of `ft_putchar` and `write`.
Let’s review your answers and fill in the missing sharp edges so you’re bulletproof for Exam 01.

---

### 1. **`1` in `write(1, &c, 1)`**

✅ Correct — it’s the **file descriptor**.

* `0` → stdin (keyboard input)
* `1` → stdout (terminal output)
* `2` → stderr (error messages)
  You’re right that `2>` in the shell redirects stderr to a file, e.g.:

```sh
./a.out 2> errors.txt
```

---

### 2. **Why `&c` and not `c`**

✅ Correct — `write` expects a **pointer to the buffer** of data to output, not the value itself.

* `&c` → address in memory where the character is stored.
* If you wrote `write(1, c, 1)`, `c` would be interpreted as a memory address (and likely crash or print garbage).

---

### 3. **Calling `ft_putchar`**

✅ Perfect —

```c
ft_putchar('A');
```

is exactly how it should be used in `main`.

---

### 4. **Header for `write`**

✅ Correct — `#include <unistd.h>` is required, because it contains the **function declaration** for `write`.

---

### 5. **If you forget `<unistd.h>`**

⚠️ Partially correct — here’s the full story:

* Without `<unistd.h>`, the compiler **doesn’t know the prototype** of `write`.
* On older C standards, it *might* compile with just a warning (implicit declaration).
* But **Moulinette uses**:

```
-Wall -Wextra -Werror
```

`-Werror` turns all warnings into errors → compilation fails.

**Example error**:

```
error: implicit declaration of function 'write' is invalid in C99
```

---

💡 **Takeaway** for ex00:

* You already have the conceptual understanding for `ft_putchar`.
* Only missing piece: knowing exactly **why** it won’t compile without `<unistd.h>` (the flags force warnings into errors).

---

I suggest we **move to ex01: ft\_print\_alphabet** and I’ll give you the same kind of “expected understanding” checklist + quiz.
That’s where loops and ASCII order start coming in — more likely to trip you up in an exam.



=====================================================================================
Alright — let’s untangle this, because it’s a **subtle but super important C thing** that trips up beginners.

---

### 1️⃣ What’s a buffer?

* A **buffer** is just a **chunk of memory** that holds data you want to process — here, the data we want to *write*.
* `write` doesn’t know or care about variables like `c`. It only works if you **give it the starting address** of some memory that already contains the bytes you want to send to stdout.
* Example:

  ```c
  char buffer[4] = {'A', 'B', 'C', '\n'};
  write(1, buffer, 4);
  ```

  Here, `buffer` is literally our “box” of data, and `write` gets the pointer to the start of that box.

---

### 2️⃣ Why `&c` works but `c` doesn’t

Let’s say:

```c
char c = 'A';
```

* `c` is **the value** `'A'` (ASCII 65), not a pointer.
* `&c` is **the address** in memory where `'A'` is stored.

`write`’s prototype is:

```c
ssize_t write(int fd, const void *buf, size_t count);
```

That `const void *buf` means:

> “Give me the address of the first byte to output.”

So:

* `write(1, &c, 1)` ✅ →
  “Go to this address (`&c`), take 1 byte, and send it to fd=1 (terminal).”

* `write(1, c, 1)` ❌ →
  Here, `c` is **65**, so the compiler treats it like
  “Go to memory address 65, take 1 byte, and print it.”
  That’s almost certainly **not** valid memory → garbage or crash.

---

### 3️⃣ Visual analogy

Think of memory as a street with numbered houses:

* `c` = the **letter in the mailbox** of house #1234 (`'A'`)
* `&c` = the **address** "House #1234"

`write` is the mailman — it needs the house **address**, not the letter itself. If you give it `'A'` (65), it will try to walk to house #65, which might not even exist.

---

This difference is *the* reason we need `&c` here — it’s how we turn our single char into a **one-byte buffer**.

---

If you want, I can give you a **tiny C snippet** that shows what happens if you try `write(1, c, 1)` — it’s an instant garbage printer. Would you like me to show that?



Exactly — you’ve nailed the core idea. ✅

Let’s phrase it clearly:

---

### **Buffer**

* A **buffer** is a *chunk of memory* that stores data you want to work with.
* The important part for functions like `write` isn’t the **value** itself, but **where** in memory that value lives — because `write` will start at that memory location and copy bytes from there.

---

### **Value vs. Address**

* **Value (`c`)** → just the raw data (`'A'` → 65 in ASCII).

  * If you give `write` just the value, it doesn’t know where to find the actual data in memory.
* **Address (`&c`)** → tells `write` *where* in memory to start reading bytes.

  * That’s what it needs to actually send the correct data to stdout.

---

### **Why the memory matters**

The value alone is meaningless to `write` because it’s not going to print “65” — it wants to grab a sequence of bytes from a location. Without the location, it’s lost.

---

💡 **Quick mental trick:**
Whenever a function takes a `void *` or `const void *`, think:

> “It wants **where to look** in memory, not the thing itself.”

---

If you’re okay with this distinction, we can roll into **C00 ex01 (ft\_print\_alphabet)** and test if you truly get **loops + ASCII order**, which is the next step up from this pointer-level thinking.
