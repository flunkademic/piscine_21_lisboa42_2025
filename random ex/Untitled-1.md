Absolutely! Here's a **basic-level quiz** on **pointers**, tailored to your level at 42 school (`C Piscine` style). It's a mix of concepts, syntax, and some code comprehension questions. I’ll quiz you first, then give answers after unless you ask for hints.

---

## 🧠 42 Pointers Quiz — Level: Beginner

### 📘 Concept Questions

1. **What does `int *ptr;` mean in C?**
 declaring a pointer of data-type integer called *ptr

2. **What does the `&` operator do when used in front of a variable?**
Referencing an address of the variable to be able to point towards it and its value. 
3. **What does the `*` operator do when used in front of a pointer?**
Have no idea? Point?
4. **What is the difference between `*ptr` and `&ptr`?**
*ptr is the pointer name, and &ptr is the thing pointed at, like the address of ptr is what we store in *ptr.
5. **How would you declare a pointer `p` that stores the address of an `int` variable `x`?**

int *p = &x;

---

### 💻 Code Comprehension

6. What will this print?

```c
#include <stdio.h>

void test(int *p)
{
    *p = 100;
}

int main()
{
    int a = 5;
    test(&a);
    printf("%d\n", a);
    return 0;
}

It will print 5. Right? Cause the value of 5 will be passed at the address of int *p?  Please explain this to me better.

``

---

7. What will this print?

```c
#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;
    *ptr = *ptr + 5;
    printf("%d\n", a);
    return 0;
}
```
print out 15? 

---

8. Will this code compile? Why or why not?

```c
int *ptr;
*ptr = 42;
```

No? Cause we need to store 42 somewhere? I mean, now it will give the address that stores into *ptr the value int of 42, but since this pointer points nowhere? I guess it won't work? Please explain more.

---

9. Which of these correctly assigns the address of variable `a` to pointer `p`?

a) `int a; int *p; p = a;`
b) `int a; int *p; p = &a;`
c) `int a; int *p; *p = a;`
d) `int a; int *p; &p = a;`


I think a is the correct answer, but all these options confuse me, please give me some answers and explanations for all your variations here.

---

10. Fill in the blanks to complete the function that sets the value at the pointer to 42:

```c
void ft_ft(int *nbr)
{
    ______ = 42;
}
```

*nbr = 42;

---

Let me know when you’re ready for the **answers**, or if you'd like **hints or explanations** for any question!
