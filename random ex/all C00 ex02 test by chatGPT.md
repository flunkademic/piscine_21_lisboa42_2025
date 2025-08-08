Great! Let’s move on to ex02: ft_print_reverse_alphabet — the classic:

Goal:
Print the entire lowercase alphabet in reverse order (from 'z' down to 'a'), all on one line.

Before you start coding, quick quiz to warm up:

What ASCII value does 'z' have?
z = 122;

What’s the condition to keep printing while going backwards?
decrement - while (letter >= 'a') { write(1, &letter, 1); letter--;}

How do you stop at 'a' inclusive?
>= 'a'

What function and arguments will you use to print each character?

Once you answer, I can guide you through a minimal but perfect solution! Ready?


Is there a way to learn how to print aBcDeFgHiJ - or whatever the way this works?

#include <unistd.h>

void print_alternating_letters(void)
{
    char c = 'a';
    int i = 0;

    while (c <= 'z')  // print letters a to j
    {
        if (i % 2 == 0)
            write(1, &c, 1);          // print lowercase
        else
        {
            char upper = c - 32;
            write(1, &upper, 1);      // print uppercase
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
