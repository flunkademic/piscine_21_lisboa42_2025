Mini Quiz: prove you get the concept
In ASCII, what number comes right after 'a'?
I am on windows so I had to check the ascii table online, so it's number 98 for 'b'?

If I start a loop with char c = 'a'; and do c++ each time, what character comes after 'z' in ASCII?
123
173	7B	01111011	{	&#123;	&lcub;	Opening brace ??? I don't know these by heart, do I need to? I am a beginner... FUUUCK

How many characters will be printed by this function?
well, are there 25 text characters, right? from a to z? and so + 1 with } it would be 26 characters?

Why do we use &c in write instead of c?
Because we need to point to the buffer (the chunk of memory) storing the value assigned to a variable that we want to use.

If I accidentally write while (c < 'z') instead of <=, which letter will not be printed?
z will not be printed.


=================================================================================

Good — you’ve got most of the reasoning right, just a few little slips we can fix so this becomes automatic for you.

---

### 1️⃣ **Number after `'a'`**

✅ Correct — ASCII for `'a'` is 97, so the next character (`'b'`) is **98**.
*(And yes, you don’t need to memorize the whole table, just the ranges: `'a'` → 97, `'A'` → 65, `'0'` → 48.)*

---

### 2️⃣ **After `'z'`**

⚠️ You’re right it’s 123 in decimal, which is `{`.
No, you don’t need to know `{` by heart — just know that after `'z'` the lowercase alphabet is over, so you shouldn’t go past `'z'`.

---

### 3️⃣ **Number of characters printed**

⚠️ You said 25 → Actually it’s **26 letters** from `a` to `z` (inclusive).
`'a'` counts as 1, `'b'` as 2, …, `'z'` as 26.

---

### 4️⃣ **Why `&c`**

✅ Correct — perfect recall of the buffer/address concept from earlier.

---

### 5️⃣ **If `<` instead of `<=`**

✅ Correct — `'z'` won’t print.

---

💡 **Takeaway:**
You understand the loop logic and ASCII relation — you just need to keep the 26-count in mind and remember that for C exams, you don’t have to know `{` is 123, you just need to know when to stop.

---

If you’re ready, I can now hit you with a **tricky variant of ft\_print\_alphabet** — the kind of curveball Exam 01 might throw — so you can practice applying this without just memorizing the original code.

Want me to hit you with that challenge next?
===================================================================================




Alright — here’s your **Exam-style twist** on `ft_print_alphabet`.

---

## **Challenge: ft\_print\_alphabet\_alt**

**Description:**
Write a function that prints the lowercase alphabet **but**:

1. Prints every **second** letter starting from `'a'` (so: `aceg...`).
2. After it reaches `'z'` or passes it, it should then print every **second** letter backwards starting from `'y'` down to `'b'`.

**Example output:**

```
acegikmoqsuwyxbvtrpnljhfdb
```

---

### **Rules:**

* Prototype:

```c
void ft_print_alphabet_alt(void);
```

* Allowed function: `write`
* No arrays, no hardcoding the output — you must use loops and ASCII logic.
* Exactly **1 forward loop** and **1 backward loop**.

---

💡 **Hint:**
If you can do `ft_print_alphabet`, this is just:

* Step forward by `+2`
* Then step backward by `-2`

---

### **Quiz Question:**

Before you code it, answer these:

1. If `'a'` is 97, what ASCII value will you start with when going backwards?
122 - 1 for z, -1 for y, so -2 in total, I start at 120?
2. In the backward loop, what condition will stop you before printing a character below `'b'`?
while (c > 'a')
{

}
3. How many characters will be printed in total?
I mean, all the alphabet, except it will be weirdly alternatived, so 26?

---

Do you want to **try answering those first** before we talk about the solution? That’s closer to how the Piscine will grill your thinking.


Perfect! Let’s review your answers carefully:

---

### 1. Starting ASCII value backward

* `'z'` = 122
* You want to start at `'y'` (one before `'z'`), so yes:
  `'y'` = 121
  You wrote 120, which is `'x'`. So it should be **121**, not 120.

---

### 2. Backward loop condition

* Your proposed loop: `while (c > 'a')`
* This will print down to `'b'` (98) because `'a'` is 97, so loop stops **before** going below `'a'`.
* Correct! That’s exactly right — it will print while `c` is greater than `'a'` so the last printed will be `'b'`.

---

### 3. Total characters printed

* Forward loop prints every second letter from `'a'` to `'y'` (since stepping by 2).
* Backward loop prints every second letter from `'y'` down to `'b'`.
* They overlap at `'y'` (printed twice?), so total is **not exactly 26**.
* Let’s count:

Forward letters: `'a'`, `'c'`, `'e'`, ..., `'y'`

* From 97 to 121, stepping 2 → `(121 - 97)/2 + 1 = 13` letters

Backward letters: `'y'`, `'w'`, `'u'`, ..., `'b'`

* From 121 down to 98 stepping -2 → `(121 - 98)/2 + 1 = 12` letters

Total = 13 + 12 = **25 characters**

---

### Summary:

* Start backward at `'y'` (121), not 120.
* Backward loop condition is good.
* Total printed letters = **25** (because `'y'` appears in both sequences).

---

Want me to help you write this function now, or try it yourself first?
