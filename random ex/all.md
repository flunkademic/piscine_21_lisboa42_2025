C00 
Contents:
IV Exercise 00: ft_putchar 
V Exercise 01: ft_print_alphabet 
VI Exercise 02: ft_print_reverse_alphabet 
VII Exercise 03: ft_print_numbers 
VIII Exercise 04: ft_is_negative 
IX Exercise 05: ft_print_comb 
X Exercise 06: ft_print_comb2 
XI Exercise 07: ft_putnbr 
XII Exercise 08: ft_print_combn 

C01
Contents
IV Exercise 00 : ft_ft 
V Exercise 01 : ft_ultimate_ft 
VI Exercise 02 : ft_swap 10
VII Exercise 03 : ft_div_mod 11
VIII Exercise 04 : ft_ultimate_div_mod
IX Exercise 05 : ft_putstr
X Exercise 06 : ft_strlen
XI Exercise 07 : ft_rev_int_tab
XII Exercise 08 : ft_sort_int_tab


C02
Contents
IV Exercise 00 : ft_strcpy
V Exercise 01 : ft_strncpy
VI Exercise 02 : ft_str_is_alpha
VII Exercise 03 : ft_str_is_numeric
VIII Exercise 04 : ft_str_is_lowercase
IX Exercise 05 : ft_str_is_uppercase
X Exercise 06 : ft_str_is_printable
XI Exercise 07 : ft_strupcase
XII Exercise 08 : ft_strlowcase
XIII Exercise 09 : ft_strcapitalize
XIV Exercise 10 : ft_strlcpy
XV Exercise 11 : ft_putstr_non_printable
XVI Exercise 12 : ft_print_memory


C03
Contents
IV Exercise 00 : ft_strcmp
V Exercise 01 : ft_strncmp
VI Exercise 02 : ft_strcat
VII Exercise 03 : ft_strncat
VIII Exercise 04 : ft_strstr
IX Exercise 05 : ft_strlcat


C04
Contents
IV Exercise 00 : ft_strlen
V Exercise 01 : ft_putstr
VI Exercise 02 : ft_putnbr
VII Exercise 03 : ft_atoi
VIII Exercise 04 : ft_putnbr_base
IX Exercise 05 : ft_atoi_base
===========================================================================
C00 
Contents:
IV Exercise 00: ft_putchar 
V Exercise 01: ft_print_alphabet 
VI Exercise 02: ft_print_reverse_alphabet 
VII Exercise 03: ft_print_numbers 
VIII Exercise 04: ft_is_negative 
IX Exercise 05: ft_print_comb 
X Exercise 06: ft_print_comb2 
XI Exercise 07: ft_putnbr 
XII Exercise 08: ft_print_combn 
===========================================================================
===========================================================================
C00

ex00 : ft_putchar
Turn-in directory: ex00/
Files to turn in: ft_putchar.c
Allowed functions: write
• Write a function that displays the character passed as a parameter.
• The function should be prototyped as follows:
void ft_putchar(char c);
• To display the character, you must use the write function as follows:
write(1, &c, 1);

ex01 : ft_print_alphabet
Turn-in directory: ex01/
Files to turn in: ft_print_alphabet.c
Allowed functions: write
• Create a function that displays the alphabet in lowercase, on a single line, in ascending order, starting from the letter ’a’.
• The function should be prototyped as follows:
void ft_print_alphabet(void);

ex02 : ft_print_reverse_alphabet
Turn-in directory: ex02/
Files to turn in: ft_print_reverse_alphabet.c
Allowed functions: write
• Create a function that displays the alphabet in lowercase, on a single line, in descending order, starting from the letter ’z’.
• The function should be prototyped as follows:
void ft_print_reverse_alphabet(void);

ex03 : ft_print_numbers
Turn-in directory: ex03/
Files to turn in: ft_print_numbers.c
Allowed functions: write
• Create a function that displays all digits on a single line, in ascending order.
• The function should be prototyped as follows:
void ft_print_numbers(void);

ex04 : ft_is_negative
Turn-in directory: ex04/
Files to turn in: ft_is_negative.c
Allowed functions: write
• Create a function that displays ’N’ or ’P’ depending on the sign of the integer passed
as a parameter.
◦ If n is negative, display ’N’.
◦ If n is positive or zero, display ’P’.
• The function should be prototyped as follows:
void ft_is_negative(int n);

ex05 : ft_print_comb
Turn-in directory: ex05/
Files to turn in: ft_print_comb.c
Allowed functions: write
• Create a function that displays all unique combinations of three distinct digits,
with both the digits within each combination and the combinations themselves in
ascending order.
• Expected output:
$>./a.out | cat -e
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
• 987 is not included because 789 already covers that combination.
• 999 is not included because the digit 9 appears more than once.
• The function should be prototyped as follows:
void ft_print_comb(void);

ex06: ft_print_comb2
Turn-in directory: ex06/
Files to turn in: ft_print_comb2.c
Allowed functions: write
• Create a function that displays all different combinations of two distinct two-digits
numbers (XX XX) between 00 and 99, listed in ascending order.
• Expected output:
$>./a.out | cat -e
00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>
• The function should be prototyped as follows:
void ft_print_comb2(void);

ex07: ft_putnbr
Turn-in directory: ex07/
Files to turn in: ft_putnbr.c
Allowed functions: write
• Create a function that displays the number passed as a parameter. The function
must be able to display all possible values of an int type variable.
• The function should be prototyped as follows:
void ft_putnbr(int nb);
• Example:
◦ ft_putnbr(42); should display 42

ex08: ft_print_combn
Turn-in directory: ex08/
Files to turn in: ft_print_combn.c
Allowed functions: write
• Create a function that displays all unique combinations of n distinct digits in ascending order, without repetition.
• The value of n will be such that: 0 < n < 10.
• Example output for n = 2:
$>./a.out | cat -e
01, 02, 03, ..., 09, 12, ..., 79, 89$>
• The function should be prototyped as follows:
void ft_print_combn(int n);


===========================================================================
===========================================================================
C01

ex00 : ft_ft
Turn-in directory: ex00/
Files to turn in: ft_ft.c
Allowed functions: None
• Create a function that takes a pointer to an int as a parameter and sets the value
of that int to "42".
• The function should be prototyped as follows:
void ft_ft(int *nbr);

ex01 : ft_ultimate_ft
Turn-in directory: ex01/
Files to turn in: ft_ultimate_ft.c
Allowed functions: None
• Create a function that takes a pointer to a pointer to a pointer to a pointer to a
pointer to a pointer to a pointer to a pointer to a pointer to an int as a parameter
and sets the value of that int to “42”.
• The function should be prototyped as follows:
void ft_ultimate_ft(int *********nbr);

ex02 : ft_swap
Turn-in directory: ex02/
Files to turn in: ft_swap.c
Allowed functions: None
• Create a function that swaps the values of two integers using their addresses received
as parameters.
• The function should be prototyped as follows:
void ft_swap(int *a, int *b);

ex03 : ft_div_mod
Turn-in directory: ex03/
Files to turn in: ft_div_mod.c
Allowed functions: None
• Create a function ft_div_mod with the following prototype:
void ft_div_mod(int a, int b, int *div, int *mod);
• This function divides ‘a’ by ‘b’ and stores the result in the integer pointed to by
‘div’. It also stores the remainder of the division of ‘a’ by ‘b’ in the integer pointed
to by ‘mod’.

ex04 : ft_ultimate_div_mod
Turn-in directory: ex04/
Files to turn in: ft_ultimate_div_mod.c
Allowed functions: None
• Create a function ft_ultimate_div_mod with the following prototype:
void ft_ultimate_div_mod(int *a, int *b);
• This function divides the value pointed to by ‘a’ by the value pointed to by ‘b’. The
result of the division is stored in the integer pointed to by ‘a’, while the remainder
is stored in the integer pointed to by ‘b’

ex05 : ft_putstr
Turn-in directory: ex05/
Files to turn in: ft_putstr.c
Allowed functions: write
• Create a function that displays a string of characters on the standard output.
• The function should be prototyped as follows:
void ft_putstr(char *str);

ex06 : ft_strlen
Turn-in directory: ex06/
Files to turn in: ft_strlen.c
Allowed functions: None
• Create a function that counts and returns the number of characters in a string.
• The function should be prototyped as follows:
int ft_strlen(char *str);

ex07 : ft_rev_int_tab
Turn-in directory: ex07/
Files to turn in: ft_rev_int_tab.c
Allowed functions: None
• Create a function that reverses a given array of integers (the first element becomes
the last, and so on).
• The function takes two arguments: a pointer to an int and the number of elements
in the array.
• The function should be prototyped as follows:
void ft_rev_int_tab(int *tab, int size);

ex08 : ft_sort_int_tab
Turn-in directory: ex08/
Files to turn in: ft_sort_int_tab.c
Allowed functions: None
• Create a function that sorts an array of integers in ascending order.
• The function takes two arguments: a pointer to an int and the number of elements
in the array.
• The function should be prototyped as follows:
void ft_sort_int_tab(int *tab, int size);


===========================================================================
===========================================================================
C02

ex00 : ft_strcpy
Turn-in directory: ex00/
Files to turn in: ft_strcpy.c
Allowed functions: None
• Reproduce the behavior of the function strcpy (man strcpy).
• Here is how it should be prototyped:
char *ft_strcpy(char *dest, char *src);


ex01 : ft_strncpy
Turn-in directory: ex01/
Files to turn in: ft_strncpy.c
Allowed functions: None
• Reproduce the behavior of the function strncpy (man strncpy).
• Here is how it should be prototyped:
char *ft_strncpy(char *dest, char *src, unsigned int n);


ex02 : ft_str_is_alpha
Exercise 02
ft_str_is_alpha
Turn-in directory: ex02/
Files to turn in: ft_str_is_alpha.c
Allowed functions: None
• Create a function that returns 1 if the given string contains only alphabetical characters and 0 if it contains any other character.
• Here is how it should be prototyped:
int ft_str_is_alpha(char *str);
• It should return 1 if str is empty.


ex03 : ft_str_is_numeric
Turn-in directory: ex03/
Files to turn in: ft_str_is_numeric.c
Allowed functions: None
• Create a function that returns 1 if the given string contains only digits and 0 if it
contains any other character.
• Here is how it should be prototyped:
int ft_str_is_numeric(char *str);
• It should return 1 if str is empty.


ex04 : ft_str_is_lowercase
Turn-in directory: ex04/
Files to turn in: ft_str_is_lowercase.c
Allowed functions: None
• Create a function that returns 1 if the given string contains only lowercase alphabetical characters and 0 if it contains any other character.
• Here is how it should be prototyped:
int ft_str_is_lowercase(char *str);
• It should return 1 if str is empty.


ex05 : ft_str_is_uppercase
Turn-in directory: ex05/
Files to turn in: ft_str_is_uppercase.c
Allowed functions: None
• Create a function that returns 1 if the given string contains only uppercase alphabetical characters and 0 if it contains any other character.
• Here is how it should be prototyped:
int ft_str_is_uppercase(char *str);
• It should return 1 if str is empty.


ex06 : ft_str_is_printable
Turn-in directory: ex06/
Files to turn in: ft_str_is_printable.c
Allowed functions: None
• Create a function that returns 1 if the given string contains only printable characters
and 0 if it contains any other character.
• Here is how it should be prototyped:
int ft_str_is_printable(char *str);
• It should return 1 if str is empty.


ex07 : ft_strupcase
Turn-in directory: ex07/
Files to turn in: ft_strupcase.c
Allowed functions: None
• Create a function that converts every letter to uppercase.
• Here is how it should be prototyped:
char *ft_strupcase(char *str);
• It should return str


ex08 : ft_strlowcase
Turn-in directory: ex08/
Files to turn in: ft_strlowcase.c
Allowed functions: None
• Create a function that converts every letter to lowercase.
• Here is how it should be prototyped:
char *ft_strlowcase(char *str);
• It should return str.


ex09 : ft_strcapitalize
Turn-in directory: ex09/
Files to turn in: ft_strcapitalize.c
Allowed functions: None
• Create a function that capitalizes the first letter of each word and converts all other
letters to lowercase.
• A word is a sequence of alphanumeric characters.
• Here is how it should be prototyped:
char *ft_strcapitalize(char *str);
• It should return str.
• For example:
hi, how are you? 42words forty-two; fifty+and+one
• Becomes:
Hi, How Are You? 42words Forty-Two; Fifty+And+One


ex10 : ft_strlcpy
Turn-in directory: ex10/
Files to turn in: ft_strlcpy.c
Allowed functions: None
• Reproduce the behavior of the function strlcpy (man strlcpy).
• Here is how it should be prototyped:
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);


ex11 : ft_putstr_non_printable
Turn-in directory: ex11/
Files to turn in: ft_putstr_non_printable.c
Allowed functions: write
• Create a function that displays a string of characters on screen. If this string
contains non-printable characters, they must be displayed as lowercase hexadecimal
values, preceded by a backslash.
• For example:
Hello\nHow are you?
• The function should display:
Hello\0aHow are you?
• Here is how it should be prototyped:
void ft_putstr_non_printable(char *str);


ex12 : ft_print_memory
Turn-in directory: ex12/
Files to turn in: ft_print_memory.c
Allowed functions: write
• Create a function that displays a memory area on screen.
• The display of this memory area should be divided into three "columns", separated
by a space:
◦ The hexadecimal address of the first character in the line, followed by a ‘:’.
◦ The content in hexadecimal, with a space every two characters, and padded
with spaces if necessary (see the example below).
◦ The content in printable characters.
• If a character is non-printable, it should be replaced by a dot
• Each line should display sixteen characters.
• If size is equal to 0, nothing should be displayed.

• Example:
$> ./ft_print_memory
000000010a161f40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin
000000010a161f50: 6368 6573 090a 0963 0720 6573 7420 666f ches...c. est fo
000000010a161f60: 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on
000000010a161f70: 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.
000000010a161f80: 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..
000000010a161f90: 0a09 6c6f 6c2e 6c6f 6c0a 2000 ..lol.lol. .
$> ./ft_print_memory | cat -te
0000000107ff9f40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin$
0000000107ff9f50: 6368 6573 090a 0963 0720 6573 7420 666f ches...c. est fo$
0000000107ff9f60: 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on $
0000000107ff9f70: 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.$
0000000107ff9f80: 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..$
0000000107ff9f90: 0a09 6c6f 6c2e 6c6f 6c0a 2000 ..lol.lol. .$
$>

• Here is how it should be prototyped:
void *ft_print_memory(void *addr, unsigned int size);
• It should return addr

===========================================================================
===========================================================================
C03

ex00 : ft_strcmp
Turn-in directory: ex00/
Files to turn in: ft_strcmp.c
Allowed functions: None
• Reproduce the behavior of the function strcmp (man strcmp).
• The function should be prototyped as follows:
int ft_strcmp(char *s1, char *s2);


ex01 : ft_strncmp
Turn-in directory: ex01/
Files to turn in: ft_strncmp.c
Allowed functions: None
• Reproduce the behavior of the function strncmp (man strncmp).
• The function should be prototyped as follows:
int ft_strncmp(char *s1, char *s2, unsigned int n);


ex02 : ft_strcat
Turn-in directory: ex02/
Files to turn in: ft_strcat.c
Allowed functions: None
• Reproduce the behavior of the function strcat (man strcat).
• The function should be prototyped as follows:
char *ft_strcat(char *dest, char *src);


ex03 : ft_strncat
Turn-in directory: ex03/
Files to turn in: ft_strncat.c
Allowed functions: None
• Reproduce the behavior of the function strncat (man strncat).
• The function should be prototyped as follows:
char *ft_strncat(char *dest, char *src, unsigned int nb);


ex04 : ft_strstr
Turn-in directory: ex04/
Files to turn in: ft_strstr.c
Allowed functions: None
• Reproduce the behavior of the function strstr (man strstr).
• The function should be prototyped as follows:
char *ft_strstr(char *str, char *to_find);


ex05 : ft_strlcat
Turn-in directory: ex05/
Files to turn in: ft_strlcat.c
Allowed functions: None
• Reproduce the behavior of the function strlcat (man strlcat).
• The function should be prototyped as follows:
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);


===========================================================================
===========================================================================

C04
ex00 ft_strlen
Turn-in directory: ex00/
Files to turn in: ft_strlen.c
Allowed functions: None
• Create a function that counts and returns the number of characters in a string.
• The function should be prototyped as follows:
int ft_strlen(char *str);

ex01 ft_putstr
Turn-in directory: ex01/
Files to turn in: ft_putstr.c
Allowed functions: write
• Create a function that prints a string of characters to the standard output.
• The function should be prototyped as follows:
void ft_putstr(char *str);


ex02 ft_putnbr
Turn-in directory: ex02/
Files to turn in: ft_putnbr.c
Allowed functions: write
• Create a function that displays the number passed as a parameter. The function
must be able to handle all possible values of the int type.
• The function should be prototyped as follows:
void ft_putnbr(int nb);
• Example usage:
◦ ft_putnbr(42) outputs "42"

ex03 : ft_atoi
Turn-in directory: ex03/
Files to turn in: ft_atoi.c
Allowed functions: None
• Write a function that converts the initial portion of the string pointed to by str into its
integer representation.
• The string may begin with an arbitrary amount of whitespace (as determined by isspace(3)).
• The string may be preceded by an arbitrary number of ‘+’ and ‘-’ signs. A ‘-’ sign
will invert the result depending on whether the number of ‘-’ signs is odd or even.
• The function should then process any consecutive digits in base 10.
• The function reads the string until a non-conforming character is encountered and returns
the number obtained so far.
• Overflow and underflow do not need to be handled; the function’s return value is undefined
in such cases.
• Example Program Output:
$>./a.out " ---+--+1234ab567"
-1234
• The function should be prototyped as follows:
int ft_atoi(char *str);


ex04 04 : ft_putnbr_base
Turn-in directory: ex04/
Files to turn in: ft_putnbr_base.c
Allowed functions: write
• Create a function that displays a number in a given base system in the terminal.
• The number is provided as an int, and the base is represented as a string of
characters.
• The base system consists of all the symbols used to represent the number.
◦ 0123456789 is the commonly used base system for representing decimal numbers.
◦ 01 is a binary base system.
◦ 0123456789ABCDEF is a hexadecimal base system.
◦ poneyvif is an octal base system.
• The function must handle negative numbers.
• If an invalid argument is provided, nothing should be displayed.
Examples of invalid arguments:
◦ The base is empty or has only one character.
◦ The base contains duplicate characters.
◦ The base contains ‘+’ or ‘-’.
• The function should be prototyped as follows:
void ft_putnbr_base(int nbr, char *base);


ex 05 : ft_atoi_base
Turn-in directory: ex05/
Files to turn in: ft_atoi_base.c
Allowed functions: None
• Write a function that converts the initial portion of the string pointed to by str
into an integer representation.
• str is in a specific base, given as a second parameter.
• Except for the base rule, the function should behave exactly like ft_atoi.
• If an invalid argument is provided, the function should return 0.
Examples of invalid arguments:
◦ The base is empty or has only one character.
◦ The base contains duplicate characters.
◦ The base contains ‘+’, ‘-’, or whitespace characters.
• The function should be prototyped as follows:
int ft_atoi_base(char *str, char *base);


============================================================================


Chapter I
Instructions
• Only this page serves as your reference, do not trust rumors.
• Watch out! This document may change before submission.
• Ensure you have the appropriate permissions on your files and directories.
• You must follow the submission procedures for all your exercises.
• Your exercises will be checked and graded by your fellow classmates.
• Additionally, your exercises will be evaluated by a program called Moulinette.
• Moulinette is meticulous and strict in its assessment. It is fully automated, and
there is no way to negotiate with it. To avoid unpleasant surprises, be as thorough
as possible.
• Moulinette is not open-minded. If your code does not adhere to the Norm, it won’t
attempt to understand it. Moulinette relies on a program called norminette to
check if your files comply with the Norm. TL;DR: Submitting work that doesn’t
pass norminette’s check makes no sense.
• These exercises are arranged in order of difficulty, from easiest to hardest. We will
not consider a successfully completed harder exercise if an easier one is not fully
functional.
• Using a forbidden function is considered cheating. Cheaters receive a grade of -42,
which is non-negotiable.
• You only need to submit a main() function if we specifically ask for a program.
• Moulinette compiles with the following flags: -Wall -Wextra -Werror, using
cc.
• If your program does not compile, you will receive a grade of 0.
• You cannot leave any additional file in your directory beyond those specified in
the assignment.
• Have a question? Ask the peer on your right. If not, try the peer on your left.
2
C Piscine C 04
• Your reference guide is called Google / man / the Internet / ...
• Check the "C Piscine" section of the forum on the intranet or the Piscine on Slack.
• Carefully examine the examples. They may contain crucial details that are not
explicitly stated in the assignment...
• By Odin, by Thor! Use your brain!!!
Norminette must be launched with the -R CheckForbiddenSourceHeader
flag. Moulinette will use it too.