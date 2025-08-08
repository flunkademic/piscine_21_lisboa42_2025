
#include <unistd.h>
void    ft_print_alternating_alphabet(void)
{
    char    c;
    int     i;

    c = 'a';
    i = 0;
    
    while (c <= 'z')
    {
        if (c % 2 == 0)
        {
            write(1, &c, 1);
        }
        else
        {
            char    upper;
            upper = c - 32;
            write(1, &upper, 1);
        }
        c++;
        i++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    print_alternating_letters();
    return 0;
}


Got it — here’s a quick clear explanation for that alternating case logic:

* Each letter has an ASCII value.
* Lowercase and uppercase letters differ by exactly 32 in ASCII.
* Using `i % 2` to check if the index is even or odd lets you choose which case to print.
* Subtract 32 from the lowercase letter’s ASCII value to get the uppercase version.
* Increment your letter each loop until you reach your target.

That’s it! Super efficient and no fancy libraries needed.

---

Ready to roll on with the next exercises? Just say which one — or if you want, I can keep throwing mini-quizzes + quick answers as we go to keep your brain sharp. What’s your plan?
