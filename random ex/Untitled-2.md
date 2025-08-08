 Now Let's Practice: Small Pointers-to-Char Exercises
🔸 Exercise 1: Print first character of a string using a pointer
Fill in the blanks:



#include <stdio.h>
int main() {
    char *str = "Piscine is wild!";
    printf("%c\n", str[0]*);
    return 0;
}
🔁 Goal: Use pointer notation to print 'P'.

🔸 Exercise 2: Change a single character via pointer


#include <stdio.h>
int main() {
    char c = 'X';
    char *ptr = &c;

    *ptr = 'Z';
    printf("%c\n", c); // Should print Z
    return 0;
}
🔁 Goal: Point to c and change its value to 'Z'.

🔸 Exercise 3: Access and print each character in a string
Write a loop to print all characters of the string "42":



#include <stdio.h>
int main() {
    char *str = "42";
    int i = 0;

    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }
    return 0;
}
🔸 Exercise 4: Change the value of a char * inside a function


#include <stdio.h>
void update_str(char **ptr) {
    *ptr = "New value!";
}

int main() {
    char *str = "Old value";
    *ptr = &str;?
    update_str(&str);
    printf("%s\n", str); // Should print: New value!
    return 0;
}
🔁 Question: Why do we pass &str to the function?
Oh damn, I didn't even see the question until later. We pass &str because we need str's address and the value it stores at that address to chnage into what the pointer value is pointing at. So it's dereferencing via pointer?

🔸 BONUS: Function to return the length of a string using pointer arithmetic


int ft_strlen(char *str){
    int len = 0;
    while (len <= str[i] && str[i] != '\0') {
        len++;
        str++;
    }
    return len;
}
🔁 Fill in the condition so the loop stops at the null terminator ('\0')